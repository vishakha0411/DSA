#include <iostream>
using namespace std;

class Diagonal{
    private:
        int *A;//pointer
        int n;
    public:
        Diagonal()//constructor
        {
            n=2;//2 by 2 matrix
            A=new int[2];//array of size 2
        }
        Diagonal(int n)//param. const.
        {
            this->n/*int n */ = n;/* param. const n*///to differentiate both n we use this pointer
            A=new int[n];
        }
        ~Diagonal()//destructor
        {
            delete []A;//delete array when obj not in use
        }
        void Set(int i, int j, int x);
        int Get(int i, int j);
        void Display();
};

void Diagonal:: Set(int i, int j, int x)//store
{
    if(i==j)
    A[i-1]=x;
}
int Diagonal::Get(int i, int j){//retrieve
    if(i==j)
    return A[i-1];
    return 0;
}

void Diagonal::Display()
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            cout<<A[i]<<" ";
            else cout<<"0 ";
        }
        cout<<endl;
    }
}
int main()
{
    Diagonal d(4);
    d.Set(1,1,5);
    d.Set(2,2,8);
    d.Set(3,3,9);
    d.Set(4,4,12);

    d.Display();
    return 0;
}