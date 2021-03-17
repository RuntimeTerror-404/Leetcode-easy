// pallingdrom
#include <bits/stdc++.h>
using namespace std;
void solution(string a){
    // vector<char> a;
    // for(char x:string){
    //     a.push_back(x);
    // }
    int sum = 0;
    int j = a.size()-1;
    for(int i=0; i<j; i++){
        if(a[i] != a[j]){
            sum += 1;
        }
        
        j--;
    }
    if(sum > 0) cout<<"False"<<endl;
    else cout<<"True"<<endl;
}


int main(){
    string s = "NITIN";
    string t = "MOHIT";
    string u = "RAVALPINAR";
    string v = "MALAYAMAM";
    solution(t);
}