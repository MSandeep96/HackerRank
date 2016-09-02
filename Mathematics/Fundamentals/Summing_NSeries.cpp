#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int ans,n,lim;
    int t;
    cin>>t;
    lim=pow(10,9)+7;
    for(int i=0;i<t;i++){
        cin>>n;
        n%=lim;
        n*=n;
        n%=lim;
        cout<<n<<"\n";
    }
    return 0;
}
