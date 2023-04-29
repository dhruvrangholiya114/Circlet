#include<stdio.h>

main()
/*
12345
 2345
  345
   45
    5
   
*/
{
	int r,c,s;
	
	for(r=1;r<=5;r++)
	{
		for(s=1;s<r;s++)
		{
			printf(" ");
		}
		
		for(c=r;c<=5;c++)
		{
			printf("%d",c);
		}
		printf("\n");
	} 
	
}
