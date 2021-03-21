#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int inpint;
    do 
    {
         inpint = get_int("Height: "); 
    }
    while (inpint < 1 || inpint > 8);
   
    string h = "#", s = " ";


    for (int i=1; i <= inpint; i++)
    {
        for (int w=0; w < ((inpint) - i); w++)
        {
            printf("%s", s);
        }
        for (int e=1; e <= i; e++)
        {
            printf("%s", h);
        }
    printf("  ");
        for (int e=1; e <= i; e++)
        {
            printf("%s", h);
        }
        for (int w=0; w < ((inpint) - i); w++)
        {
            printf("%s", s);
        }
    printf("\n");
    }
}
