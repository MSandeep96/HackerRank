#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,no,evenProd=0,finalProd=0,oddnos;
    cin>>t;
    for(int i=0;i<t;i++){
        //take in no
        cin>>no;
        //powers of 2
        evenProd=0;
        //if odd then print 0
        finalProd=1;
        if(no%2!=0){
            cout<<0<<"\n";
            continue;
        }
        //count no of 2s
        while(no%2==0){
            evenProd++;
            no/=2;
        }
        evenProd++;
        //get prime factors
        for(int i=3;i<=sqrt(no);i=i+2){
			//oddnos
			oddnos=0;
			while(no%i==0){
				oddnos++;
				no/=i;
			}
			if(oddnos!=0){
				finalProd*=(oddnos+1);
			}
        }
        //if no>2 one more prime factor exists
        if(no>2)
            finalProd*=2;

        finalProd=finalProd*evenProd-finalProd;
        //muh formula
        cout<<finalProd<<"\n";
    }
    return 0;
}
