// C program to illustrate strstr() in user defined function

#include <stdio.h>
#include <string.h>

char *location = NULL;

char *strstr_function(char s1[], char s2[])
{
	int len2 = strlen(s2);
	int len1 = strlen(s1);
	int count=0;
	char *location;
	static int j=0;
	
	for (int i=0;i<len2;i++)
	{
		for (;j<len1;j++)
		{
			if (s1[j] == s2[i])
			{
			    if (!count)
			        location = &s1[j];
			    count++;
			    j++;
			    break;
			}
			else
				count = 0;
		}
	}
	if (count == len2)
		return (location);
	else
		return NULL;
}

int main()
{
	char s1[] = "My name is Nani";
	char s2[] = "Nan";
	
	location = strstr_function(s1,s2);
	
	if (location)
	{
		printf("String 2 found in string 1 from index %d\n",location-s1);
	}
	else
	{
		printf("String 2 is not found in String 1");
	}
	
	return 0;
}