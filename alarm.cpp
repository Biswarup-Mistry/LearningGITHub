//c++ can only call One(1) Program file at a time

#include<iostream>
#include<stdlib.h>
#include "Queue.cpp"
//#include "Queue.cpp"
using namespace std;

class alarm{
	public:
	void AdjList();
	void Que();
};

void alarm :: AdjList(){
	int n,o;
	node* head=NULL;
	node* last=NULL;
	cout<<"***ADJACENCY LIST***"<<endl;
	cout<<"Enter the total no. of vertices present at the Graph G :-> "<<endl;
	cin>>n;
	kk k(n);
	do{
		cout<<"ADJACENCY LIST MENU"<<endl;
		cout<<"_ _ _ _ _ _ _ _ _ _ _"<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"1. Enter the Adjacency Vertex"<<endl;
		cout<<"2. Display"<<endl;
		cout<<"_ _ _ _ _ _ _ _ _ _ _"<<endl;
		cin>>o;
		switch(o){
			case 0:
			cout<<"***GAME OVER***"<<endl;
			break;
			case 1:
			k.list(head,last);
			break;
			case 2:
			k.display(head);
			break;
			default:
			cout<<"Wrong Choice... Choose Again..."<<endl;
			break;
		}
	}while(o!=0);
}

void alarm :: Que(){
	int data,op;
	Queue q;
	cout<<"***Welcome to The Queue Program***"<<endl<<"- - - - - - - - - - - - - -"<<endl;;
	do{
		cout<<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
		cout<<"QUEUE MENU"<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"1. Enqueue Element"<<endl;
		cout<<"2. Dequeue Element"<<endl;
		cout<<"3. Display"<<endl;
		cout<<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
		cin>>op;
		switch(op){
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
	}while(op!=0);
}

int main(){
	system("clear");
	alarm a;
	int opt,data;
	do{
		cout<<"*****QUEUE AND ADJACENCY LIST*****"<<endl;
		cout<<"\tMENU"<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"1. Call AdjacencyList "<<endl;
		cout<<"2. Call Queue"<<endl;
		//cout<<"3. Call BFS"<<endl;
		cout<<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
		cin>>opt;
		switch(opt){
			case 0:
			break;
			case 1:
			a.AdjList();
			break;
			case 2:
			a.Que();
			break;
			default :
			cout<<"Wrong Choise... Choose Again..."<<endl;
			break;
		}
	}while(opt!=0);
	return 0;
}