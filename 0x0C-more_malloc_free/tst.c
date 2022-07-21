#include <stdio.h>
int main()
{
	printf("date is %s", __DATE__);
	printf("time is %s", __TIME__);
	printf("filename is %s", __FILE__);
	return (0);
}
