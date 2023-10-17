#include <stdio.h>

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
}
printf("\n");
}

int main(void)
{
int array[5] = {98, 402, -198, 298, -1024};
print_array(array, 5);
return (0);
}

