#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<=1)
        return false;
    if(n<=3)
        return true;
    if(n % 2 == 0 || n % 3 ==0)
    return false;

    for( int i=2; i < n; i++)//time compl. o(n)
    //if for root n the use i*i time comp o(sqrt(n))
        if(n % i==0)
            return false;
    return true;        
    /*for(int i=5; i*i <=n; i=i+6)
    if(n % i == 0 || n % (i+2) == 0)
        return false;*/
    
}

int main(){
    isPrime(11) ? cout << "true\n" : cout<< " false\n";
    isPrime(15) ? cout << "true\n" : cout << "false\n";
    return 0; 
}