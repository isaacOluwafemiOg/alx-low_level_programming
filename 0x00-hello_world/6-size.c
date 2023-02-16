#include <stdio.h>
int main(void)
{
	char myarr[5][] = {"char", "int", "long int", "long long int", "float"};
	int i;
	for (i=0; i<5; i++)
	{
		printf("Size of a %s: %d byte(s)\n", myarr[i], sizeof(myarr[i]));
	}
	return (0);
}	
