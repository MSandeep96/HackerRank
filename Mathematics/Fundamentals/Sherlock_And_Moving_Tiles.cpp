#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int len,v1,v2,n,relV;
    long int qi;
    double t,diag,dist;
    cin>>len>>v1>>v2>>n;
    relV=abs(v1-v2);
    for(int i=0;i<n;i++){
        cin>>qi;
        diag=sqrt(2*qi);
        dist=sqrt(2)*len-diag;
        t=dist/relV;
        printf("%.4f\n",t);
    }

    return 0;
}
