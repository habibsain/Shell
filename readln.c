#include<stdio.h>
#include<stdlib.h>

int main()
{
	char * c;
	int max_char = 50;
	int index = 0;
	int val;

	c = malloc(sizeof(char) * max_char);
	if(c == NULL)
	{
		printf("Memory allocation failed");
		exit(0);
	}
	while(1)
	{
		val = getchar();
		if(val == EOF || val == "\n" || index == max_char)
		{
			c[index] = "\0";
			break;
		}
		c[index] = val;

		index++;
	}

		
	printf("The string is %s\n", c);
	free(c);

	return 0;
}
