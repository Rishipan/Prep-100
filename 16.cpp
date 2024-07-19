// Fibonacci Series upto nth term :

#include<iostream>
#include<math.h>
using namespace std;

void fibbo(int n){
    int t1=0;
    int t2=1;
    if(n>1) cout<<t1<<" ";
    if(n>2) cout<<t2<<" ";
    for(int i=2; i<=n; i++){
        int t3=t1+t2;
        cout<<t3<<" ";
        t1=t2;
        t2=t3;
    }
}

int main(){
    int n;
    cin>>n;

    fibbo(n);

    return 0;
}