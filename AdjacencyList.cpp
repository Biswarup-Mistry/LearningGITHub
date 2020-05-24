#include<iostream>
#include<stdlib.h>

using namespace std;

struct node{
	int data,distance,parent;//nodes color,distance from source vertex, and the vertex itself
	char color;//node's color
	node* link;
};

class kk{
	private :
	node *arr;//arr is a pointer of type node
	public:
	int size;
	kk(int n){
		size=n;
		arr=new node[size];//creating a dynamic array of size 'size'
	}
	bool isEmpty(node *&head);//gives t/f value
	node*& getnode(node *&head,node *&last,int data,int distance,int parent,char color);//create the first node
	node*& createNode(node *&head,node *&last,int data,int distance,int parent,char color);//create the other nodes 
	void list(node *&head,node *&last);//gets the data and sends to the createNode
	void display(node *&head);//display the nodes present in arr[i]
	//void init(node *&head);//initializing the vertices
};

bool kk:: isEmpty(node *&head){
	if(head==NULL)
		return true;
	else
	return false;
}

node*& kk:: getnode(node *&head,node *&last,int data,int distance,int parent,char color){
	node *n=new node;
	n->data=data;
	n->distance=distance;
	n->parent=parent;
	n->color=color;
	n->link=NULL;
	head=n;
	last=n;
	return head;
}

node*& kk:: createNode(node *&head,node *&last,int data,int distance,int parent,char color){
	if(isEmpty(head)){
		head=getnode(head,last,data,distance,parent,color);
	}
	else{
		node *n=new node;
		n->data=data;
		n->distance=distance;
		n->parent=parent;
		n->color=color;
		n->link=head;
		head=n;
	}
	return head;
}

void kk :: list(node *&head,node *&last){
	int i,j,m,data,dis,parnt;
	char clr;
	node *h=new node;
	h=head;
	node *l=new node;
	l=last;
	node *v=new node;
	for(i=0;i<size;i++){
		cout<<"How many Adjacency vertices are present in the node "<<i+1<<" ? ==>>"<<endl;
		cin>>m;
		for(j=0;j<m;j++){
			cout<<"Enter the "<<j+1<<" Adjacency Vertex for Vertex "<<i+1<<" ==>>"<<endl;//gives the next adjacent vertex
			cin>>data;
			//cout<<"Enter the Parent of"<<j+1<<" Adjacency Vertex for Vertex "<<i+1<<" ==>>"<<endl;//gives the parent node
			//cin>>data;
			cout<<"The Parent of "<<data<<" is "<<i+1<<endl;
			cout<<"Enter the Distance From the Source Vertex ==>>"<<endl;//gives the distance
			cin>>dis;
			cout<<"Enter the Color of the "<<data<<" Vertex ==>>"<<endl;//gives the color o' the adjacent vertex
			cin>>clr;
			
			v=createNode(h,l,data,dis,i+1,clr);
			arr[i]=node(*v);
			select;v;
		}
		h=NULL;
		l=NULL;
	}
}

void kk:: display(node *&head){
	int i;
	node *ptr=new node;
	//ptr=head;
	cout<<"**************************"<<endl;
	for(i=0;i<size;i++){
		ptr=&arr[i];
		cout<<"["<<i+1<<"] ==>> ";
		while(ptr!=NULL){
			cout<<ptr->data<<"/"<<"Distance = "<<ptr->distance<<"/"<<"Parent = "<<ptr->parent<<"/"<<"Color = "<<ptr->color<<" -->>";
			ptr=ptr->link;
		}
		select;ptr;
		cout<<"[/]"<<endl;
	}
	cout<<"**************************"<<endl;
}
/*
int main(){
	system("clear");
	int n,opt;
	node* head=NULL;
	node* last=NULL;
	cout<<"***ADJACENCY LIST***"<<endl;
	cout<<"Enter the total no. of vertices present at the Graph G :-> "<<endl;
	cin>>n;
	kk k(n);
	do{
		cout<<"\tMENU"<<endl;
		cout<<"_ _ _ _ _ _ _ _ _ _ _"<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"1. Enter the Adjacency Vertex"<<endl;
		cout<<"2. Display"<<endl;
		cout<<"_ _ _ _ _ _ _ _ _ _ _"<<endl;
		cin>>opt;
		switch(opt){
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
	}while(opt!=0);
	return 0;
}
*/