#include <stdio.h>
#include <stdlib.h>

void Is_Right_Angle(int x, int y, int z);

int main()
{
    int x,y,z;
    printf("Enter the length of the side \n");
    scanf("%d",&x);
    printf("Enter the length of another side \n");
    scanf("%d",&y);
    printf("Enter the length of the biggest side \n");
    scanf("%d",&z);

    Is_Right_Angle(x,y,z);

 /*   if((z*z)==(x*x)+(y*y))
    {
        printf("The triangle is right angle\n");
    }
    else{
        printf("The triangle is not right angle\n");
    }
    printf("Hello world!\n");*/
    return 0;
}

void Is_Right_Angle(int x, int y, int z)
{

     if((z*z)==(x*x)+(y*y))
    {
        printf("The triangle is right angle\n");
    }
    else{
        printf("The triangle is not right angle\n");
    }

}
