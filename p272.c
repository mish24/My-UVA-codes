//solution to p272
#include <stdio.h>
#include <stdlib.h>

int main()
{
	freopen("input.txt", "r", stdin);

	char tempChar;
	int i=1;

	while((tempChar = getchar()) != EOF)
	{
		if(tempChar == '"'){
			if(i==1)
			{
				printf("``");
				i++;
				continue;
			}
			else
			{
				printf("''");
				i--;
				continue;
			}
		}
		printf("%c", tempChar);
	}
	return 0;
}