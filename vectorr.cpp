#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> v)
    {
        for(int i=0; i <v.size(); i++)
        {
            cout <<v[i] << " ";
        }
        cout <<endl;
    }

int main(){
    vector<int>vec1;
    int n;
    cout<<"enter no. of elements ";
    cin >> n;
    for(int i = 0; i < n ; i++)
    {
        int ele;
        cout<< "enter elements";
        cin >> ele;
        vec1.push_back(ele);
    }
    display(vec1);
    return 0;
}