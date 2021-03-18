// length of last word
#include <bits/stdc++.h>
using namespace std;

int solution(string name){
    if(name.empty()){
        return 0;
    }
    int n = name.length();
    int total = 0;
    for(int i=n-1; i>=0; i--){
        if(name[i] == ' '){
            break;
        }
        total += 1;
    }
    if(total == n){
        return 0;
    }
    else{
        return total;
    }
}

int main(){
    string name = "hello worl d Mohi th";
    // cout<<name.length()<<endl;
    cout<<solution(name);
}