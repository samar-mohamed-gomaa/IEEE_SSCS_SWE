#include<stdio.h>
#include<string.h>
typedef struct env_var{
   char *key;
   char *value;
   struct env_var *next;
}env_var;
 
env_var *add_env_var(env_var **head, const char *key, const char *value) {
    if (!key || !value) return NULL;
 
    env_var *current = *head;
    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            free(current->value);
            current->value = strdup(value);
            return current;
        }
        current = current->next;
    }

    env_var *new_var = (env_var *)malloc(sizeof(env_var));
    if (!new_var) return NULL;

    new_var->key = strdup(key);
    new_var->value = strdup(value);
    new_var->next = *head;
    *head = new_var;

    return new_var;
}

env_var *update_env_var(env_var *head, const char *key, const char *value) {
    if (!key || !value) return NULL;

    env_var *current = head;
    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            free(current->value);
            current->value = strdup(value);
            return current;
        }
        current = current->next;
    }

    return NULL;
}

env_var *delete_env_var(env_var **head, const char *key) {
    if (!key || !*head) return NULL;

    env_var *current = *head;
    env_var *prev = NULL;

    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            if (prev == NULL) {
                *head = current->next;
            } else {
                prev->next = current->next;
            }
            free(current->key);
            free(current->value);
            free(current);
            return *head;
        }
        prev = current;
        current = current->next;
    }

    return NULL;
}

const char *get_env_var(env_var *head, const char *key) {
    if (!key) return NULL;

    env_var *current = head;
    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            return current->value;
        }
        current = current->next;
    }

    return NULL;
}

env_var *init_env_vars(env_var head, char envp) {
    if (!envp) return NULL;

    for (int i = 0; envp[i] != NULL; i++) {
        char *key = strtok(envp[i], "=");
        char *value = strtok(NULL, "=");
        add_env_var(head, key, value);
    }

    return *head;
}

void print_env_to_file(env_var *head, const char *filename) {
    if (!filename) return;

    FILE *file = fopen(filename, "w");
    if (!file) return;

    env_var *current = head;
    while (current != NULL) {
        fprintf(file, "%s=%s\n", current->key, current->value);
        current = current->next;
    }

    fclose(file);
}

void free_env_vars(env_var *head) {
    env_var *current = head;
    while (current != NULL) {
        env_var *temp = current;
        current = current->next;
        free(temp->key);
        free(temp->value);
        free(temp);
    }
}
int main(int argc, char **argv, char **envp)
{ env_var *head = NULL;
init_env_vars(&head, envp);
add_env_var(&head, "MY_VAR", "764");
updat_env_var(head,"PATH","/new/path");
delete_env_var(&head, "HOME");
const char *value =get_env_vars(head, "PATH");
if (value)
  printf("PATH: %s\n",value);
print_env_to_file(head, "environment.txt");
free_env_vars(head);
return 0;
}
