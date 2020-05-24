#include<iostream>
#include<stdlib.h>
#include<cstdlib>

using namespace std;

class insertionSort{
	private:
	int *arr;
	public:
	int size;
	insertionSort(int n){
		size=n;
		arr=new int[size];
	}
	int count_Comparison(int count);
	int count_swap(int count);
	void enterElement();
	void sort();
	void display();
};

int insertionSort :: count_Comparison(int count){
	int Comp;
	Comp=count;
	Comp++;
	return Comp;
}

int insertionSort :: count_swap(int count){
	int Swap;
	Swap=count;
	Swap++;
	return Swap;	
}

void insertionSort :: enterElement(){
	int i;
	cout<<"Entering the Elements => "<<endl;
	for(i=0;i<size;i++){
		cout<<"["<<i<<"] => ";
		cin>>arr[i];
	}
	cout<<"Elements Entered !"<<endl;
}

void insertionSort :: sort(){
	int i,j,val,Swap,Com;
	Swap=0;
	Com=0;
	for(i=1;i<size;i++){
		val=arr[i];
		j=i-1;
		while(arr[j]>val && j>=0){
			arr[j+1]=arr[j];
			j=j-1;
			Com=count_Comparison(Com);
		}
		arr[j+1]=val;
		Swap=count_swap(Swap);
	}
	cout<<"The No. of Comparison is => "<<Com<<endl;
	cout<<"The No. of Swap is => "<<Swap<<endl;
	cout<<"The Array has been Sorted now !"<<endl;
}

void insertionSort :: display(){
	int i;
	cout<<"The Elements =>"<<endl;
	for(i=0;i<size;i++){
		cout<<"["<<i<<"] => "<<arr[i]<<endl;
	}
}

int main(){
	system("clear");
	int n,data,opt;
	cout<<"***Insertion Sort With No. of Comparison and Swap***"<<endl;
	cout<<"Enter the Size of the Array => "<<endl;
	cin>>n;
	insertionSort iS(n);
	do{
		cout<<"\tMENU"<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"1. Enter Elements"<<endl;
		cout<<"2. Sort"<<endl;
		cout<<"3. Display"<<endl;
		cin>>opt;
		switch(opt){
			case 0:
			cout<<"Exited From The Program"<<endl;
			break;
			case 1:
			iS.enterElement();
			break;
			case 2:
			iS.sort();
			break;
			case 3:
			iS.display();
			break;
			default :
			cout<<"Wrong Choise... Choose Again..."<<endl;
			break;
		}
	}while(opt!=0);
	return 0;
}