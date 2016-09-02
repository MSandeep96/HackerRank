#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,l,b,maxEdge,maxPieces;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>l>>b;
        maxEdge=max(l,b);
        for(int j=1;j<=maxEdge;j++){
            if((l%j==0)&&(b%j==0)){
                maxPieces=(l/j)*(b/j);
            }
        }
        cout<<maxPieces<<"\n";
    }
    return 0;
}
