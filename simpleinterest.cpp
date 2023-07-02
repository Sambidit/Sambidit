#include<iostream>
using namespace std;
int main(){
    float p,r,t;
    cout<<"Principal amount : ";
    cin>>p;
    cout<<"Rate of Interest : ";
    cin>>r;
    cout<<"Time : ";
    cin>>t;
    cout<<"SI : "<<(p*r*t)/100;
}