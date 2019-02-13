#include <stdio.h>
#include <math.h>
 
int main()
{
    float w, l, h;
    float surfacearea, volume, space_diagonal;
 
    printf("Enter the width, length & height:\n");
    scanf("%f%f%f",&w,&l,&h);
    surfacearea = 2 *(w * l + l * h +
    h * w);
    volume = w * l * h;
    space_diagonal = sqrt(w * w + l * l +
    h * h);
    printf("Surface area of cuboids is: %.3f", surfacearea);
    printf("\n Volume of cuboids is : %.3f", volume);
    printf("\n Space diagonal of cuboids is : %.3f", space_diagonal);
    return 0;
}
