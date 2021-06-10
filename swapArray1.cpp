#include <iostream>
using namespace std;

int main(){
	system("clear");
	int n,k,l;
	cout<<"Enter the size of the array ==>>"<<endl;
	cin>>n;
	int *a=new int[n];
	int *b=new int[n];
	cout<<"Enter the elements of the first array ==>>"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter the elements of the second array ==>>"<<endl;
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	cout<<"Before swapping the elements of the two array ==>>"<<endl;
	cout<<"a[] = {";
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<"}"<<endl;
	cout<<"b[] = {";
	for(int i=0;i<n;i++){
		cout<<b[i];
	}
	cout<<"}"<<endl;
	for(int i=0;i<n;i++){
		k=a[i];
		a[i]=b[i];
		b[i]=k;
	}

	cout<<"After swapping the elements of the two array ==>>"<<endl;
	cout<<"a[] = {";
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<"}"<<endl;
	cout<<"b[] = {";
	for(int i=0;i<n;i++){
		cout<<b[i];
	}
	cout<<"}"<<endl;
	return(0);
}
