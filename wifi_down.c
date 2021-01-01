#include <stdio.h>
#include <stdlib.h>	//to use system()

int main()
{
	printf("Disabling wifi...");
	system("nmcli connection down shiv_alg");
	return 0;
}