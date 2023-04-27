#include<stdio.h>

main()
/*
54321
4321
321
21
1
*/
{
	int r,c;
	
	for(r=5;r>=1;r--)
	{
		for(c=r;c>=1;c--)
		{
			printf("%d",c);
		}
		printf("\n");
	} 
	
}
