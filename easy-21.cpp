// merge two sorted lists
#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> l1;
    list<int> l2;
    int element1;
    int element2;
    for(int i=0; i<3; i++){
        cin>>element1;
        cin>>element2;
        l1.push_back(element1); 
        l2.push_back(element2); 
    }
    l1.merge(l2);
    l1.sort();
    for(auto it=l1.begin(); it!=l1.end(); it++){
        cout<<(*it)<<"->";
    }
    cout<<"NULL"<<endl;
}     