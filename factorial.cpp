#include<iostream>
using namespace std;

int main(){
int n,res=1;
cout<<"Enter the Number ==>>"<<endl;
cin>>n;
for(int i=1;i<=n;i++){
	res=res*i;
}
cout<<n<<"! = "<<res<<endl;
return(0);
}
