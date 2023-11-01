#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculate the minimum number of coins to make change for an amount.
 * @argc: The number of arguments.
 * @argv: An array of arguments.
 *
 * Return: (0) on success, (1) on error.
 */
int main(int argc, char *argv[])
{
int cents, num_coins, total_coins, i;
int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}

num_coins = sizeof(coins) / sizeof(coins[0]);
total_coins = 0;

for (i = 0; i < num_coins; i++)
{
while (cents >= coins[i])
{
cents -= coins[i];
total_coins++;
}
}

printf("%d\n", total_coins);

return (0);
}

