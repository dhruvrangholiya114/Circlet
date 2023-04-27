#include<stdio.h>

main()
/*
5
54
543
5432
54321
*/
{
	int r,c;
	
	for(r=5;r>=1;r--)
	{
		for(c=5;c>=r;c--)
		{
			printf("%d",c);
		}
		printf("\n");
	} 
	
}
