// remove duplicates from sorted array
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=9;
    vector<int> v = {1,3,1,7,9,3,4,0,1};
    int num;
    set<int> s;
    for(int i=0; i<v.size(); i++){
        s.insert(v[i]);
    }
    for(auto it=s.begin(); it!=s.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;
}