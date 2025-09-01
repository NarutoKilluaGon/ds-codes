#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(2);
    v.push_back(1);
    v.push_back(3);
    cout<<v.size();
    cout<<v.capacity();

     for (int i=0;i<v.size();i++){
        cout<<v[i]<<"\t";
        cout<<v.at(i)<<" ";

     }

     for (auto value:v){
        cout<<value<<"  ";
     }
     v.pop_back();
     cout<<"front"<<v.front()<<"back"<<v.back();
     v.insert(v.begin(),2);
     v.insert(v.begin()+3,2);
     //to print ahead of begin i.e. 0th index do v.begin()+3
     v.insert(v.begin()+4,3,11);
     //to print three copies of 11 at 0th+4 index ie the fifth element
    v.erase(v.begin());
    v.erase(v.begin(),v.begin()+3);
    //works like v.erase[a,b)

    cout<<v.size();
    cout<<v.capacity();
    vector <int> v1(3,6);
    vector <int> v2={2, 3,4,54};   

    vector<int>::iterator itr;
    for (auto itr=v.begin(); itr!=v.end();itr++){
        cout<<*(itr)<<"  ";
    }
    for (auto itr=v.rbegin(); itr!=v.rend();itr++){
        cout<<*(itr)<<"  ";
    }
    
    return 0;
}