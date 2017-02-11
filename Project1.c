#include<stdio.h>
#include<string.h>




int main(void)
{
	char str[200] = "The night was cold as it was long. The ground, still moist from the rain, antagonized his will to perservere.";
	const char s[10] = ". ,";
	char *token;
	
	token = strtok(str, s);
	
	while(token != NULL)
	{
		printf("%s\n", token);
		
		token = strtok(NULL,s);
	}
	
	
	
	
	
	return 0;
}