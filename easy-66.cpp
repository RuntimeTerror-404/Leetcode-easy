// plus one
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &a){
    int len = a.size()-1;
    int sum = 0;
    for(int i=0; i<a.size(); i++){
        if(i == len){
            a[i] += 1;
        }
        sum = sum * 10 + a[i];
    }
    return sum;

}

int main(){
    vector<int> a = {4, 3, 2, 1};
    cout<<solution(a)<<endl;
}