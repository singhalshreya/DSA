#include<iostream>
using namespace std;

void towerofhanoi(char src, char helper, char des, int n){
if(n==0){
    return;
}
towerofhanoi(src, des, helper,n-1);
cout<<"Taking disk "<< n<<" from"<< src<<" to"<<des<<endl;
towerofhanoi(helper,src,des,n-1); 
}

int main(){
    int n;
    cin>>n;
towerofhanoi('A','B','C',n);
}