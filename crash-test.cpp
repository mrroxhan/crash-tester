#include <iostream>
using namespace std;

int main(){
long double n =9999999999999,i;

long double *ptr1;
long double *ptr2;
long double *ptr3;
long double *ptr4;
long double *ptr5;

for(i=0;i<n;i++){
    ptr1 =new long double;
    ptr2 =new long double;
    ptr3 =new long double;
    ptr4 =new long double;
    ptr5 =new long double;

    *ptr1 = i*2;
    *ptr2 = i*2;
    *ptr3 = i*2;
    *ptr4 = i*2;
    *ptr5 = i*2;

    cout<<*ptr1<<*ptr2<<*ptr3<<*ptr4<<*ptr5;
}
return ;
}
