// longest common prefix
#include <bits/stdc++.h>
using namespace std;

string solution(vector<string> &v){
    int count=0, min=1000;
    string str;
    for(int i=0; i<v.size(); i++){
        int len = v[i].length();
        if(len < min){
            min = len;
            str = v[i];
        }
    }
    for(int i=0; i<str.size(); i++){
        for(int j=0; j<v.size(); j++){
            if(v[j][i] != str[i]){
                return str.substr(0, count);
            }
        }
        count++;
    }
    return str.substr(0, count);
}

int main(){
    vector<string> v = {"flow", "flower", "flight"};
    cout<<solution(v)<<endl;
}