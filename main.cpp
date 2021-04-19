#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;


int main()
{
    char znak [50];
    cout << "Podaj napis:";
    cin.getline(znak,50);
    cout<<endl;
    cout<<"Napis to:"<<znak<<endl;
    cout<<"Ma on:"<<strlen(znak)<<" znakow";
    return 0;
}
