#include<iostream>
using namespace std;

struct node{
	int data;
	node *link;
};

class adjList{
	private :
	node* arr;
	int size;
	public:
	adjList(int n){
		size=n;
		arr= new node[size];	
	}
	bool isEmpty(node *&head);
	node*& Insert_at_Begining(node *&head,node *&last,int data);
	node*& getnode(node *&head,node *&last,int data);	
	void list();	
	void display();
};

bool adjList :: isEmpty(node *&head){
	if(head==NULL)
		return(true);
	else
		return(false);
} //checks whether the linked list empty or not
	
node*& adjList :: getnode(node *&head,node *&last,int data){
		node *n=new node;
		n->data=data;
		n->link=NULL;
		head=n;
		last=n;
		return head;
} //creats only the first node of the arr[i]

node*& adjList ::  Insert_at_Begining(node *&head,node *&last,int data){
		if(isEmpty(head)){
			head=getnode(head,last,data);
		}
		else{
			node *n=new node;
			n->data=data;
			n->link=head;
			head=n;
		} //creat other nodes of arr[i]
		return head; //returns head's address
}

void adjList :: list(){
	int i,k,j;
	int data;
	node *head=NULL;
	node *last=NULL;
	node* v=new node; //a pointer named "v"
	for(i=0;i<size;i++){
		cout<<"How many Adjacent Vertex are present in Vertex "<<i+1<<" ? ==>>"<<endl;
		cin>>k;
			for(j=0;j<k;j++){
			cout<<">> "<<j+1<<" >> Enter The  Adjacent Vertex of Node "<<i+1<<" ==>>"<<endl;
			cin>>data;
			v=(Insert_at_Begining(head,last,data)); //'v' takes the head's address and point it
			arr[i]=node(*v); //saving the pointer named 'v' in arr[i]'s position 
			select;v;			
		}
		head=NULL;
		last=NULL;
	}
}	

void adjList :: display(){
	int i;
	for(i=0;i<size;i++){
		node *ptr=new node;
		ptr=&arr[i]; //ptr poin pointes the address of the arr[i]th element's address
		cout<<endl<<"The Adjacent Vertex(ices) of "<<i+1<<" is ==>>"<<endl;
		while(ptr!=NULL){
			cout<<ptr->data<<"-->>";
			ptr=ptr->link;
		}
		cout<<"[/]"<<endl;
		select;ptr;
	}
}

int main(){
	int n;
	int opt;
	cout<<"<<<===Adjacent List using Linked List in a graph G===>>>"<<endl;
	cout<<"Enter The Number of Entire Nodes Present in the Graph ==>>"<<endl;
	cin>>n;
	adjList a(n);
	do{
		cout<<endl<<"0. Exit"<<endl;
		cout<<"1. Enter Adjacent Nodes "<<endl;
		cout<<"2. Display"<<endl;
		cin>>opt;
		switch(opt){
			case 0:
			break;
			case 1:
			a.list();
			break;
			case 2:
			a.display();
			break;
			default:
			cout<<"Wrong Choise... Choose Again..."<<endl;
			break;
		}
	}while(opt!=0);
	return(0);
}
