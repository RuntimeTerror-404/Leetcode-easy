// remove element
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {3, 2, 5, 3, 7, 9, 1, 3, 5, 99};
    int val = 3;
    // vector<int> :: iterator it;
    // it = v.begin();
    // for(int i=0; i<v.size(); i++){
    //     if(v[i] == val){
    //         v.erase(it+i);
    //     }
    // }
    for(auto it=v.begin(); it!=v.end(); it++){
        if(*it == val){
            v.erase(it);
        }
    }
    cout<<v.size();
}