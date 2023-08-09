#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[1000],i,n;

    cout << "size";
    cin >> n;
    for( i=0; i<n; i++)
    {
        cin >> arr[i];  
    }
    int min=arr[0], max =arr[0];
    for(i=1; i<n; i++){
        if(arr[i]>max)
            max=arr[i];
        
        else if(arr[i]< min)
        min=arr[i];
    }
    cout <<"max" <<max;
    cout <<"min" <<min;
   
    
   /* for( i=0; i<n; i++){
        cout << arr[i] <<" ";
        
    } */
    return 0;
        
}