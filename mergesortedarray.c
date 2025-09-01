#include <stdio.h>
int main (){
    int a[3]={3, 5 ,8 };
    int b[4]={1, 2 ,6 , 9};
    int c[7];
    int i=0,j=0,k=0;
    int m=3, n=4;
    while (i<m&&j<n){
        if (a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }
    if (i<m){
        c[k]=a[m-1];
    }
    else c[k]=b[n-1];

    for (k=0;k<7;k++){
        printf("%d\t",c[k]);
    }
    return 0;
}