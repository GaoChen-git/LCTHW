#include <stdio.h>                                  

struct Person {
    char *name;
    int age;
    int height;
    int weight;
};

void Person_print(struct Person who)
{
    printf("Name: %s\n", who.name);
    printf("\tAge: %d\n", who.age);
    printf("\tHeight: %d\n", who.height);
    printf("\tWeight: %d\n", who.weight);
}

int main()
{
    // Create two people structures on the stack
    struct Person joe = {
        .name = "Joe Alex",
        .age = 32,
        .height = 64,
        .weight = 140
    };

    struct Person frank = {
        .name = "Frank Blank",
        .age = 20,
        .height = 72,
        .weight = 180
    };

    // Print them out
    Person_print(joe);
    Person_print(frank);

    joe.age+=20;
    joe.height -= 2;
    joe.weight += 40;
    frank.age += 20;
    frank.weight += 20;

    Person_print(joe);
    Person_print(frank);

    return 0;
}

