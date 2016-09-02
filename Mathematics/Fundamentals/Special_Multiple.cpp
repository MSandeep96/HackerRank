#include <iostream>
#include <cmath>
using namespace std;

/**
* Causing time out error in 10th test case
*/

int main(){
    int t,n,fac,temp,tenpow;
    long long divi,val;
    cin>>t;
    while(t--){
        cin>>n;
        fac=1;
        divi=9;
        //brute force though
        while(divi%n!=0){
            divi=0;
            fac++;
            temp=0;
            //constant time of 8
            while(temp!=16){
                //accesses bits of our temp variable
                val=((fac & (1 << temp)) >> temp)*9;
                val*=round(pow(10,temp));
                divi+=val;
                temp++;
            }
        }
        cout<<divi<<"\n";
    }

}
