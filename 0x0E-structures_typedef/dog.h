#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents information about a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * init_dog - Initializes a dog structure.
 * @d: Pointer to the dog structure to initialize.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Description: This function initializes a dog structure with the provided
 * name, age, and owner. If the pointer to the dog structure is NULL, the
 * function does nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */

