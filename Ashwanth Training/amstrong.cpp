#include<iostream>
#include<cmath>
using namespace std;

void amstrong(int a){
    int n = a, sum = 0, temp =0;
    while(n!=0){
        n = n/10;
        temp++;

    }
    n = a;

    while (n!=0){
        int temps = n%10;
        sum = sum+pow(temps,temp );
        n = n/10;
    }
    if (sum ==a ){
        cout<<a<<" "   <<" is an amstrong number"<<endl;
    }
    else{
        cout<<a<<" " << "is not a amstrong number"<<endl;
    }

}



int main(){
    int a;
    cout<<"enter the number:";
    cin>>a;
    amstrong(a);

    return 0;
}