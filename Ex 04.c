#include <stdio.h>
#include <stdlib.h>

int main()
{
    //using recursion
    void decimalToBinary(int decimal) {
    if (decimal > 0) {
        decimalToBinary(decimal / 2);
        printf("%d", decimal % 2);
    }
}

    int decimal;
    printf("enter the deimal no:");
    scanf("%d",&decimal);
    if(decimal==0){
        printf("0");
    }
    else{
        decimalToBinary(decimal);
    }


}
