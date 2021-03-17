#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 4;
    int a[n] = {2, 7, 11, 15, 6, 3, 12};
    int target = 17;
    vector<int> v;
    int sum;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] != a[j] && a[i]+a[j]==target){
                v.push_back(i);
                v.push_back(j);
                break;
            }
        }
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    
}