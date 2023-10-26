#include <stdio.h>
#include <stdlib.h>

int main()
{
    float height;
    printf("Enter the Height in cm:");
    scanf("%f",&height);
    if(height>=165){
        printf("Your Height is Tall");
    }else if(height<150){
        printf("Your Height is Dwarf");
    }else if(height==150){
        printf("Your Height is Average");
    }
    return 0;
}
