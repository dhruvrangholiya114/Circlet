#include<stdio.h>

main()
/*
    1
   12
  123
 1234
12345
*/
{
	int r,c,s;
	
	for(r=1;r<=5;r++)
	{
		for(s=5;s>r;s--)
		{
			printf(" ");
		}
		for(c=1;c<=r;c++)
		{
			printf("%d",c);
		}
		printf("\n");
	} 
	
}

