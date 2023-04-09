#include<iostream>

using namespace std;

void func(int a);
int main(){
    int a=5;
    func(5);
    
    system("pause");
    return 0;
}

void func(int a){
    if(a>1){
        func(a-1);
    }
    cout<<a<<endl;
}