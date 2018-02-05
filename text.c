#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	FILE *fp;
	int count=0;
	char a;
	fp = fopen("count.dat","rb"); 
	
	if (fp!=0)
	{
		while((a=getc(fp)) != EOF)
		{
			if (a == ' ')
			{
				count = count+1;
			}
			else if (a == '\n')
			{
				count = count+1;
			}
		}
	}
	
	printf("%d\n",count);
	return 0;
}
	
