// roman to integer
#include <bits/stdc++.h>
using namespace std;

int RomantToInt(string s){
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    map<char, int> roman;
    roman.insert(make_pair('I', 1));
    roman.insert(make_pair('V', 5));
    roman.insert(make_pair('X', 10));
    roman.insert(make_pair('L', 50));
    roman.insert(make_pair('C', 100));
    roman.insert(make_pair('D', 500));
    roman.insert(make_pair('M', 1000));

    int len = s.length(), num, sum=0;
    for(int i=0; i<len; ){
        if(i == (len-1) || roman[s[i]]>=roman[s[i+1]]){
            num = roman[s[i]];
            i = i+1;
        }
        else{
            num = roman[s[i+1]] - roman[s[i]];
            i = i+2;
        }
        sum = sum + num;
    }
    return sum;
}

int main(){
    string s = "LVIII";
    string u = "mcmxciv";
    cout<<RomantToInt(s)<<endl;
    cout<<RomantToInt(u)<<endl;

}

/*
I = 1
V = 5
X = 10
L = 50
C = 100
D = 500
M = 1000
*/