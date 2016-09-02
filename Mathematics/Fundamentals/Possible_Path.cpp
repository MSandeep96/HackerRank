#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a,int b){
    if(a<0&&b<0){
        return gcd(-a,-b);
    }else if(a<0){
        return gcd(-a,b);
    }else if(b<0){
        return gcd(a,-b);
    }
    return (b==0)?a:gcd(b,a%b);
}

int main() {
    int n,a,b,x,y;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>x>>y;
        if(gcd(a,b)==gcd(x,y)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
