#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: A pointer to the newly created dog, or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;

new_dog = malloc(sizeof(dog_t)); /* Allocate memory for the dog structure */

if (new_dog == NULL)
return (NULL);

/* Allocate memory for name and owner and copy the strings */
new_dog->name = strdup(name);
new_dog->owner = strdup(owner);

if (new_dog->name == NULL || new_dog->owner == NULL)
{
/* Memory allocation failed, so free previously allocated memory */
free(new_dog->name);
free(new_dog->owner);
free(new_dog);
return (NULL);
}

new_dog->age = age;

return (new_dog);
}

