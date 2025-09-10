#include <bits/stdc++.h>
using namespace std;
int main (){
    vector <int> a={3, 5 ,8 };
    vector <int> b={1, 2 ,6 , 9};
    vector <int> c;
    int i=0,j=0,k=0;
    int m=3, n=4;
    while (i<m&&j<n){
        if (a[i]<b[j])
        {
            c.push_back(a[i]);
            i++;
            
        }
        else
        {
            c.push_back(b[j]);
            j++;
        }
    }
    if (i<m){
        c.push_back(a[m-1]);
    }
    else
        c.push_back(b[n-1]);

    for (int i=0;i<n+m;i++){
        cout<<c[i]<<" ";
    }
    return 0;
} 

/*#include <bits/stdc++.h>
using namespace std;
int main (){
    vector <int> a={3, 5 ,8 };
    vector <int> b={1, 2 ,6 , 9};
    vector <int> c(a.size()+b.size());
    int i=0,j=0,k=0;
    int m=3, n=4;

    merge(a.begin(),a.end(),b.begin(),b.end(),c.begin());
    for (int i=0;i<n+m;i++){
        cout<<c[i]<<" ";
    }
    
    return 0;
} */
