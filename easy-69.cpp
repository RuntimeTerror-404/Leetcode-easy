// squrt(x)
#include <bits/stdc++.h>
using namespace std;

int solution(int num){
    int ans = sqrt(num);
    return ceil(ans);
}

int main(){
    int x = 4;
    int y = 8;
    int z = 20;
    cout<<solution(x)<<endl;
    cout<<solution(y)<<endl;
    cout<<solution(z)<<endl;
}