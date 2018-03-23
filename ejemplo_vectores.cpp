#include <stdio.h>
int main()
{
float v1[5] = {1, 34, 32, 45, 34};
float v2[5] = {12, -3, 34, 15, -5};
float v3[5];
int i;
for(i = 0; i < 5; i++)
v3[i] = v1[i] + v2[i];
printf("Vector3: ");
for(i = 0; i < 5; i++)
printf(" %.2f ", v3[i]);
printf("\n");
return 0;
}
