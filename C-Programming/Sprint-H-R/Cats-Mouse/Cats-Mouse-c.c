#include <stdio.h>
#include <stdlib.h>

char *Cats_Mouse(int a, int b, int c)
{
        int x = abs(a - c);
		int y = abs(b - c);

		if(x < y)
			return "Cat A";
		else if(y < x)
			return "Cat B";
		else
			return "Mouse C";
}

int main()
{
	int q; // Number of Queries

	scanf(" %d",&q);

	while(q--)
	{
		int catA,catB, mouse;
	
		scanf(" %d",&catA);

		scanf(" %d",&catB);
    
		scanf(" %d",&mouse);

        printf("%s", Cats_Mouse(catA, catB, mouse));
	
	}

}
