#include<bits/stdc++.h>
using namespace std;
int main(){
    int size=9;
    int arr[]={2,4,5,8,10,13,14,17,20};
    int low=0;//0
    int high=size-1;//8
    
    int n;//"4"
    cout<<"enter number to search";
    cin>>n;
    bool found=false;

     while(low<=high){
        int mid=(high+low)/2;//4

        if (arr[mid]==n){
            found=true;
            cout<<"number found at"<< mid+1 <<"th place\n";
            break;

        }
        if (arr[mid]>n){
            high=mid-1;
 
            }
        else {
            low=mid+1;

        }
    }
    if (found=true){
        cout<<"number not found\n";
    }
    return 0;
}
    