#include<bits/stdc++.h>
using namespace std;

//using pointer
int main(){
    int n, *ptr ;
    cout << "size";
    cin >> n;
    cout<<" elements";
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];  
    }
    ptr=&arr[n-1];
    for(int i=n-1;i >=0;i--){
        cout<<" "<<*ptr<<" ";
        ptr--;
    }
    return 0;
}