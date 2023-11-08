#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a dog's information
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 */
struct dog
{
char *name;
float age;
char *owner;
};

/* Function prototype */
void print_dog(struct dog *d);

#endif /* DOG_H */

