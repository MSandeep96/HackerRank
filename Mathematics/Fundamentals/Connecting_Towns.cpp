#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,N,Ni,maxx,mod=1234567;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>N;
        maxx=1;
        for(int j=0;j<N-1;j++){
            cin>>Ni;
            maxx*=Ni;
            maxx%=mod;
        }
        cout<<maxx<<"\n";
    }
    return 0;
}
