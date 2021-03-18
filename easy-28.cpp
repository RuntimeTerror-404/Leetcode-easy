// implement strStr()
#include <bits/stdc++.h>
using namespace std;

int solution(string haysteck, string needle){
    if(needle.empty()){
        return 0;
    }
    int m = haysteck.length();
    int n = needle.length();
    if(m < n){
        return -1;
    }
    for(int i=0; i<m; i++){
        int j;
        for(j=0; j<n; j++){
            if(haysteck.at(i+j) != needle[j]){
                break;
            }
        }
        if(j == n){
            return i;
        }
    }
    return -1;

}


int main(){
    string haysteck = "hello";
    string needle = "ll";
    cout<<solution(haysteck, needle);

}


// int solution(string h, string n){
//     if(n == " "){
//         return 0;
//     }
//     else{
//         int index = h.find(n);
//         return index;
//     }
// }