#include<iostream>
#include<algorithm>
using namespace std;

bool duplicate(int arr[], int n)
{
    bool flag =false;
    //for duplicate
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                flag=true;
            }
        }
    }
    if(flag==true){
        return true;
        //cout<<"duplicate";
    }
    else{
        return false;
        //cout<<"not duplicate";
    }
}

int main(){
    int n;
    cout << "size";
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[n];
    }
    //duplicate(arr,n);
    if(duplicate(arr,n))
    {
        cout << "duplicate"<<endl;
    }
    else
    {cout<<"no duplicate" << endl;
    }
    return 0;
}





























/*
bool containsDuplicate(int arr[], int size)
{
    bool flag = false;
    //Iterate the loop for checking duplicates
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            // comparing array elements
            if(arr[i]==arr[j])
            {
                flag = true;
            }
        }
    }
    if(flag==true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    //define an array
    int arr[] = {34,49,56,21,19,49,58};

    //calculating size of array
    int size = sizeof(arr)/sizeof(arr[0]);

    //if duplicates are present in array
    if(containsDuplicate(arr,size))
    {
        cout<<"The Array contains duplicates" << endl;
    }
    else
    {
        cout<<"The Array doesn't contains duplicate" << endl;
    }

    return 0;
}
*/