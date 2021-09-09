#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
int a[100],i,b=1,c=0,d;
cout<<"enter numbers and press -1 to stop"<<endl;
for(i=0;b>0;i++){
    cin>>b;
    a[i]=b;
    c++;
    }
for(d=0;d<c;d++){
    for(i=0;i<c;i++){
            if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            }
    }
}
cout<<"the sorted order is"<<endl;
for(i=1;i<c;i++){
cout<<a[i]<<endl;
}
}
