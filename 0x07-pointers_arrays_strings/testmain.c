#include <string.h>
#include <stdio.h>
  
int main()
{
	char s1[] = "Fun with STL";
	    char s2[] = "STL";
	        char* p;
		  
		    p = strstr(s1, s2);
		    printf("%s\n" ,p);
		    return (0);
}

