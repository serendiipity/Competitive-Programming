#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	int count;
	gets(str);
	for (count=0; count<strlen(str); count++) {
		printf("%c",str[count]);
		switch(str[count])
		{
			case 'a': case 'e': case 'u': case 'i': case 'o': count+=2;
			break;
		}
	/*	if(str[count]=='a' || str[count]=='e' || str[count]=='u' || str[count]=='o' || str[count]=='i'  ) {
			count+=2;
		}*/
	}
	printf("\n");
	return 0;
}

