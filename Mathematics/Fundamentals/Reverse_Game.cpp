#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n,k;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>k;
        if(k>=n/2){
	       cout<<2*(n-k-1)<<endl;
        }else{
	       cout<<2*k+1<<endl;
        }
    }
    return 0;
}
