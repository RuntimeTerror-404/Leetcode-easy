#include <bits/stdc++.h>
using namespace std;

int solution1(vector<int>&v, int target){
    int n = v.size();
    for(int i=0; i<n; i++){
        if(v[i] == target){
            return i;
        }
        else{
            if(target > v[i] && target < v[i+1]){
                return i+1;
            }
            else if(target > v[n-1]){
                return n;
            }
        }
    }
    return 0;
}

int main(){
    vector<int> v = {1, 3, 5, 6};
    int target1 = 5;
    int target2 = 2;
    cout<<solution1(v, target2);
}