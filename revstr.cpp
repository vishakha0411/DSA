#include<bits/stdc++.h>
using namespace std;

void rev(string& str){
    int n= str.length();
    for(int i=0; i<n/2; i++){
        swap(str[i], str[n-i-1]);
    }
}

int main(){
    string str ="hellohowareyou";
    rev(str);
    cout << str;
    return 0;
}
/*
void rev(string& str)
{
    int len=str.length();
    int n=len-1;
    int i =0;
    while(i<=n)
    {
        swap(str[i], str[n]);
        n=n-1;
        i=i+1;
    }

    int main()
    {
        string str= "howareyou";
        rev(str);
        cout << str;
        return 0;
    }
}*/