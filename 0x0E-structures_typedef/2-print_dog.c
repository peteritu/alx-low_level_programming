#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog's information
 * @d: Pointer to a struct dog
 *
 * Description: Prints a struct dog's information in a specific format.
 */
void print_dog(struct dog *d)
{
if (!d)
return;
printf("Name: %s\n", (d->name ? d->name : "(nil)"));
printf("Age: %.6f\n", (d->age < 0 ? -1.0 : d->age));
printf("Owner: %s\n", (d->owner ? d->owner : "(nil)"));
}

