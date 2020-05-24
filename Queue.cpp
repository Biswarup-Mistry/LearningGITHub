#include<iostream>
#include<stdlib.h>
#include "AdjacencyList.cpp"

using namespace std;

class Queue{
	private :
	int *Q;
	public :
	int size=10;
	int f=-1;
	int r=-1;
	Queue(){
		Q=new int[size];
	}
	int Enqueue(int data);//Enter a data into the Queue
	int Dequeue();//Return the first element of the Queue
	void display();//display the elements present in the Queue
};

int Queue :: Enqueue(int data){
	if(r==size){
		cout<<"Queue Overload !"<<endl;
	}
	else if(f==-1){
		f++;
	}
	r++;
	Q[r]=data;
}

int Queue :: Dequeue(){
	int data;
	if(f==-1){
		cout<<"Queue Underflow!"<<endl;
	}
	else{
		if(f==r){
			data=Q[f];
			Q[f]=0;
			cout<<"Dequeued Element is => "<<data<<endl;
			f=-1;
			r=-1;
		}
		else{
			data=Q[f];
			Q[f]=0;
			f++;
			cout<<"Dequeued Element is => "<<data<<endl;
		}
	}
	return data;
}

void Queue :: display(){
	int i;
	cout<<"_ _ _ _ _ "<<endl;
	for(i=0;i<size;i++){
	cout<<"["<<i+1<<"] = "<<Q[i]<<endl;
	}
	cout<<"_ _ _ _ _ "<<endl;
}
/*
int main(){
	int data,opt;
	Queue q;
	system("clear");
	cout<<"***Welcome to The Queue Program***"<<endl<<"- - - - - - - - - - - - - -"<<endl;;
	do{
		cout<<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
		cout<<"\tMENU"<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"1. Enqueue Element"<<endl;
		cout<<"2. Dequeue Element"<<endl;
		cout<<"3. Display"<<endl;
		cout<<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
		cin>>opt;
		switch(opt){
			case 0:
			cout<<"***Exited From the Program***"<<endl;
			break;
			case 1:
			cout<<"Enter the Data to Enqueue in the Queue ==>>"<<endl;
			cin>>data;
			q.Enqueue(data);
			break;
			case 2:
			q.Dequeue();
			break;
			case 3:
			q.display();
			break;
			default:
			cout<<"Wrong Choise... Choose Again..."<<endl;
			break;
		}
	}while(opt!=0);
	return 0;
}
*/