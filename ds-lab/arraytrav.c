#include <stdio.h>
int main() {
    int n;
    printf("Enter no. of elements to enter: ");
    scanf ("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    //traversal means accessing each element
    printf("The elements of array are:\n");
    for (int i=0; i<n; i++){
        printf("%d  ",arr[i]);
    }
    printf("\nDone");
    return 0;
}
