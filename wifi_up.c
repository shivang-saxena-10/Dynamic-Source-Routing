#include <stdio.h>
#include <stdlib.h>	//to use system()

int main()
{
	printf("Enabling wifi...");
	system("nmcli connection up shiv_alg");
	return 0;
}