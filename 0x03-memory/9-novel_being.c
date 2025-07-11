#include<stdio.h>
struct Being
{char *name;
 int age;
 float energy_level;
};
void print_being(struct Being *b)
{ if(b == NULL)
    {printf("Being is NULL\n");
     return;
    }
    printf("Name : %s, Age: %d, Energy: %.2f\n",b->name, b->age,b->energy_level);
}

int main()
{ 
struct  Being person={ "hana", 20, 96.7};
printf("person details :\n");
print_being(&person);
return 0;
}
