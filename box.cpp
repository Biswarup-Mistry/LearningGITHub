#include<stdio.h>
using namespace std;
class box{
	public:
	int *arr;
	box(int o){
		int n;
		n=o;
		arr=new int[n,n];
	}
	int maxH(int k);
	void display();
	int max(int i);
};

int box :: maxH(int k){
	int i,j;
	for(i=k;i<n;i++){
		for(j=0;j<n;j++ && j!=i){
			if(arr[i][j]==NULL){
				return(arr[i][j]);
			}
			else{
				if((w[i]<w[j])&&(L[i]<L[j])){
					arr[i][j]=b[i]+maxH(k);
					return(arr[i][j]);
				}
				else
					return (0);
			}
		}
	}
	return b[j];
}

int box :: max(int i){
	int j;
	int max;
	for(j=0;j<n;j++ && j!=i){
		max=arr[i][j];
		if(max<arr[i][j+1]){
			max=arr[i][j+1];
		}
	}
	return(max);
}

void box :: display(){
	int i;
	for(i=0;i<n;i++){
		cout<<"If top of the boxes starting form "<<i<<" , The Maximum Hight would be"<<endl;
		cout<<max(i);
	}
}
	
int main(){
	int opt,n;
	int *b;
	int *w;
	int *L;
	cout<<"<<<===Box Hight Count===>>>"<<endl;
	cout<<"How Many Box(es) are Present ? =>"<<endl;
	cin>>n;
	box b(n);
	b=new int[n];
	w=new int[n];
	L=new int[n];
		
	do{
		cout<<"0. Exit"<<endl;
		cout<<"1. Enter Box Hight(s)"<<endl;
		cout<<"2. Display"<<endl;
		switch(opt){
			case 0:
			break;
			case 1:
			for(int i=0;i<n;i++){
				cout<<"Enter the Hight of the box "<<i<<" =>"<<endl;
				cin>>b[i];
				cout<<"Enter the Width of the box "<<i<<" =>"<<endl;
				cin>>w[i];
				cout<<"Enter the Length of the box "<<i<<" =>"<<endl;
				cin>>L[i];				
			}
			b.maxH(0);
			break;
			case 2:
			b.display();
			break;
			default:
			cout<<"Wrong Choise... Choose Again..."<<endl;
			break;
		}
	}while(opt!=0);
	return 0;
}