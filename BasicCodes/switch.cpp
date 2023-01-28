// Given an integer choice denoting the choice of the user and a list containing the single value R or two values L and B depending on the choice.
// If the user's choice is 1, calculate the area of the circle having the given radius(R).  
// Else if choice is 2, calculate the area of the rectangle with given length(L) and breadth(B).
#include<iostream>
using namespace std;

int main(){
    int areachoice;
    cin>> areachoice;
    int R, l,b;
    switch(areachoice){
        case 1: 
        {cout<<"Enter radius in cm: ";
        cin>>R;
        cout<<"Area of circle is "<<3.14*R*R;
        break;
        }
        case 2: 
        {cout<<"Enter length and breadth in cms: ";
        cin>>l>>b;
        cout<<"Area of rectangle is "<<l*b;
        break;
        }
        default:
        cout<<"Invalid Input!"<<endl;
    }    

}