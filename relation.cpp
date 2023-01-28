#include<iostream>
using namespace std;

void func(int n, int m){
if(n==m){
    cout<<"equal"<<endl;
}
else if(n<m){
    cout<<"lesser"<<endl;
}
else{
    cout<<"greater"<<endl;
}
}

int main(){
    int n,m;
    cin>> n >>m;
    func(n,m);
    

}