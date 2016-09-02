#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,t,x,y;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cin>>t;
    while(t--){
        cin>>x>>y;
        if(array[x-1]%2==0  && (x==y||array[x]!=0)){
            cout<<"Even";
        }else{
            cout<<"Odd";
        }
        cout<<"\n";
    }
    return 0;
}
