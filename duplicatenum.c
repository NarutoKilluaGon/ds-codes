#include <stdio.h>
int main (){
    int a[9]={1,1,1,2,2,1,4,3,4};
    int b[5];
    for (int i=0;i<=8;i++){
        b[a[i]]+=1;
    }
    for (int i=0;i<=4;i++){
        printf("%d",b[i]);

    }

    return 0;
}