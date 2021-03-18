// maximum subarray
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=9;
    int a[n] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxsum = 0;
    for(int s=0; s<n; s++){
        for(int e=s; e<n; e++){
            int sum = 0;
            for(int k=s; k<=e; k++){
                sum += a[k];
            }
            maxsum = max(maxsum, sum);
        }
    }
    cout<<maxsum<<endl;

}