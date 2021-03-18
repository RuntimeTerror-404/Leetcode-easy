// climbing stairs
#include <bits/stdc++.h>
using namespace std;

int solution(int number){
    if(number == 1){
        return 1;
    }
    if(number == 2){
        return 2;
    }
    else{
        return solution(number-1) + solution(number-2);
    }
}

int main(){
    int number = 5;
    cout<<solution(number)<<endl;
}