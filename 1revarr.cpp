#include<bits/stdc++.h>
using namespace std;

//using reverse 

void rev(int arr[], int n){
    reverse(arr, arr+n);
}
void display(int arr[],int n){
    for( int i=0; i<n; i++){
        cout << arr[i] <<" ";
        
    }
}
int main(){
    int n;
    cout << "size";
    cin >> n;
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];  
    }
    rev(arr,n);
    display(arr,n);
    return 0;
}
/*
void rev(int arr[], int n){
    reverse(arr, arr+n);
}
void display(*ptr,int n){
    for( int i=0; i<n; i++){
        cout << *ptr <<" ";
        ptr++; 
    }ptr
}
*/