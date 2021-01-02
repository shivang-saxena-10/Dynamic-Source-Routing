#include <stdio.h>
#include <stdlib.h>	//to use system()

int main()
{
	printf("Enabling Hotspot...");
	system("nmcli device wifi hotspot con-name my-hotspot ssid my-hotspot band bg password Mak8VTmS");
	return 0;
}