#include <iostream>
using namespace std;

int  main(){

 int  m,n,a;
long long int counter=0;
long long int counter1=0;

cin>>m>>n>>a;
int n1=n;
int m1=m;
m=m/a;
counter+=m;
if((m1%a)!=0){
    counter++;
}
n=n/a;
counter1+=n;
if((n1%a)!=0){
    counter1++;
}

cout<<counter*counter1;

}
