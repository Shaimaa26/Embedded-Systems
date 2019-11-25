#include <stdio.h>
#include <stdlib.h>

// the side length from 0-255 so data types char is enough

unsigned char is_right_angle(unsigned int x, unsigned int y, unsigned int z);

int main()
{
    unsigned int q=3;
    unsigned int result , x,y,z;
    printf("Hello world!\n");
    printf("\n");
    while(q--){
    printf("Please Enter the 3 side lengths = ");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);

    result = is_right_angle(x,y,z);
    if(result)
    {
        printf("The 3 sides %d, %d, %d are form the right angle\n",x,y,z);
        printf("\n");
    }
    else{
        printf("The 3 sides %d, %d, %d are not form the right angle\n",x,y,z);
        printf("\n");
    }
    }

    return 0;
}

unsigned char is_right_angle(unsigned int x, unsigned int y, unsigned int z)
{
    unsigned int x_square=(x*x);   //to avoid traction, make casting
    unsigned int y_square=(y*y);
    unsigned int z_square=(z*z);

    // to check for the sides not equal zero
    if ((x_square !=0) && (y_square !=0) && (z_square !=0))
    {
        if ((x_square==y_square+z_square)||
            (y_square==x_square+z_square)||
            (z_square==y_square+x_square))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
        printf("Each side must have length and it shouldn't equal Zero\n");
 return 0;
}
