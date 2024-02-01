#include <iostream>
#include<bits/stdc++.h>
using namespace std;


// statically
class Stackusingarray{
  int *array;
  int size;
  int top;
  public:
  Stackusingarray(int size){
      top = -1;
      array = new int[size];
  }
  
  void push(int data){
      top++;
      array[top] = data;
  }
  int pop(){
    int x = array[top];
    top--;
    return x;
  }
  bool empty(){
      if(top==0 || top==-1){
          return true;
      }
      return false;
  }
  int currsize(){
      return top +1;
  }
  int Top(){
      return array[top];
  }
};

int main() {
    Stackusingarray s(500);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<s.currsize()<<endl;
    cout<<s.empty()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.empty()<<endl;
    s.push(10);
    cout<<s.Top()<<endl;
    cout<<s.currsize()<<endl;
    
    return 0;
}


// dynamically
// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;

// class Stackusingarray{
//   int *array;
//   int size;
//   int top;
//   public:
//   Stackusingarray(int size){
//       top = -1;
//     //   size = 500;
//       array = new int[size];
//   }
  
//   void push(int data){
//       if(top==size-1){
//           int *newarray = new int[2*size];
//       for(int i=0;i<size;i++){
//           newarray[i] = array[i];
//       }
//       size = size*2;
//       delete [] array;
//       array = newarray;
//       }
//       top++;
//       array[top] = data;
//   }
//   int pop(){
//     int x = array[top];
//     top--;
//     return x;
//   }
//   bool empty(){
//       if(top==0 || top==-1){
//           return true;
//       }
//       return false;
//   }
//   int currsize(){
//       return top +1;
//   }
//   int Top(){
//       return array[top];
//   }
// };

// int main() {
//     Stackusingarray s(5);
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);
//     s.push(6);
//     cout<<s.currsize()<<endl;
//     cout<<s.empty()<<endl;
//     cout<<s.pop()<<endl;
//     cout<<s.empty()<<endl;
//     s.push(10);
//     cout<<s.Top()<<endl;
//     cout<<s.currsize()<<endl;
//     return 0;
// }