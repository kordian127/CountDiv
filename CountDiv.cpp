#include<iostream>
using namespace std;

int main(){
int a=4;
int b=11;
int k=2;
int p=0;

for (int i=a;i<=b;i++){
        if(i%k==0){
            p+=1;
    }
}
cout<<p<<endl;
return 0;
}
