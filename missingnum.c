/*#include <stdio.h>
int main (){
    int n,a,ctr=0;
    printf("ENter no: ");
    scanf("%d",&n);

    printf("Enter length of the array\n");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the elements:\n");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=0;j<a;j++)
        {
            if (arr[j]==i)
            {
                ctr=1;
                break;
            }
        }
    if (ctr==0)
    printf("Element %d is missing\n",i);
    ctr=0;
    }
    return 0;
}*/
#include <stdio.h>
int main (){
    int m,n,a,ctr=0;
    printf("ENter the range: ");
    scanf("%d%d",&n,&m);

    printf("Enter length of the array\n");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the elements:\n");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for(int i=n;i<m+1;i++)
    {
        for(int j=0;j<a;j++)
        {
            if (arr[j]==i)
            {
                ctr=1;
                break;
            }
        }
    if (ctr==0)
    printf("Element %d is missing\n",i);
    ctr=0;
    }
    return 0;
}