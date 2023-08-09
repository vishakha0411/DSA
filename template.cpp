#include<iostream>
#include<vector>
using namespace std;

template<class T>//syntax
class Vec1{//class for vector
    public:
    T data;
    T* arr;//array of any type if int supplies int if char char
    templ(T a){
        data = a;
    }
    void display();
};

template <class T>
void Vec1<T>:: display(){
    cout << data;
}
void func(int a){
    cout << "first func() "<< a << endl;
}

void display(vector<int> &v){
    for(int i=0; i < v.size(); i++)
    {
        cout << v[i]<<" ";
    }
    cout << endl;
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