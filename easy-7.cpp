#include <bits/stdc++.h>
using namespace std;

int solution(int x){
    int num = 0;
    if(x > 0){
        while(x > 0){
            num = num * 10;
            num = num + (x % 10);
            x = x/10;
        }
    }
    else{
        x = -1 * x;
        while(x > 0){
            num = num * 10;
            num = num + (x % 10);
            x = x/10;
        }
        num = -1 * num;
    }
    return num;
}

int main(){
    int x = 123;
    int y = -123;
    int z = 120;
    cout<<(solution(x))<<endl;
    cout<<(solution(y))<<endl;
    cout<<(solution(z))<<endl;
    
}