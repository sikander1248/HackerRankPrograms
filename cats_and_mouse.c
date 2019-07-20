#include <stdio.h>
#include <stdlib.h>
int main()
{
	int q;
	//printf("Number of Queries : ");
	scanf(" %d",&q);

	while(q--)
	{
		int catA,catB, mouse;
		//printf("Enter the starting position of Cat A : ");
		scanf(" %d",&catA);

		//printf("Enter the starting position of Cat B : ");
		scanf(" %d",&catB);

		//printf("Enter the starting position of Mouse : ");
		scanf(" %d",&mouse);

		int x = abs(catA - mouse);
		int y = abs(catB - mouse);

		if(x < y)
			printf("Cat A\n");
		else if(y < x)
			printf("Cat B\n");
		else
			printf("Mouse C\n");
	}
		
}
