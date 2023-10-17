#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 62

/**
* main - Generates a random password.
*
* Description:
* This program generates a random password of a specified length.
* The password includes lowercase letters, uppercase letters, and digits.
*
* Return: Always 0.
*/
int main(void)
{
char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int charset_length = PASSWORD_LENGTH;
char password[PASSWORD_LENGTH + 1]; /* +1 for the null terminator */

time_t t;
srand((unsigned)time(&t)); /* Initialize the random number generator with the current time */

int i;
for (i = 0; i < PASSWORD_LENGTH; i++)
{
int index = rand() % charset_length;
password[i] = charset[index];
}

password[PASSWORD_LENGTH] = '\0'; /* Null-terminate the password */

printf("%s\n", password); /* Print the generated password */

return 0;
}

