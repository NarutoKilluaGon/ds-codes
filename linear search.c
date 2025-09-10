#include <stdio.h>
int main(){
    int n,b;
    printf("enter array size");
    scanf("%d",&n);
    int arr[n];
    printf("enter element to find ");
    scanf("%d",&b);
    int flag=0;
    for (int i=0; i<n; i++){

        if (arr[i]==b){
            
            flag=1;
            break;
        }
    }
     if (flag){
        printf("found");
    }
    else printf("not found");
    return 0;
}