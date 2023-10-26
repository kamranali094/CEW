#include <stdio.h>
#include <stdlib.h>
void main(){
int n;
printf("Input Number of Rows:");
scanf("%d",&n);
int spac = n-1;
for(int i=1;i<=n;i++){
for(int j=spac;j>=0;j--){
        printf(" ");
    }
for(int k=1;k<=i;k++){
    printf("* ");
}
printf("\n");
spac--;
}


}



