#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,j,bulbs;
    long int perms;
    cin>>n;
    for(int i=0;i<n;i++){
        perms=1;
        cin>>bulbs;
        for(j=1;j<=bulbs/8;j+=1){
                perms*=pow(2,8);
                perms%=100000;
        }
        j--;
        j*=8;
        perms*=pow(2,bulbs-j);
        perms-=1;
        perms%=100000;
        cout<<perms<<"\n";
    }
    return 0;
}
