#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int r,c,ans;
    cin>>r>>c;
    if(r%2==0){
        ans=(c*2-1)+(r/2-1)*10;
    }else{
        ans=(c*2-2)+(r/2)*10;
    }
    cout<<ans;
    return 0;
}
