#include <iostream>
using namespace std;

int main(){

    int a[10][5];
    for (int i=0; i<10; i++){
        for (int j=0; j<5; j++){
            cout<<"The marks obtained by Student "<<i+1<<" in subject"<<j+1<<":"<<endl;
            cin>>a[i][j];
        }
    }

    cout<<"Two dimensional Array is:"<<endl;
    for(int i=0;i<10;i++){
        for(int j=0;j<5;j++){
            cout<<a[i][j]<<endl;
        }
    }
    return 0;
}