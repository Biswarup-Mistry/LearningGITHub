#include <iostream>
#include <stdlib.h>

using namespace std;

struct node{
	int data,distance;
	node *parent;
	char color;
	node* link;
};

class BFS{
	private :
	node *arr;//arr is a array of Pointers 
	node *Q;//the array of Queue of Pointers
	public:
	int size;
	BFS(int n){
		size=n;
		arr=new node[size];//creating a dynamic array of pointers of size 'size'
		Q=new node[size];//creating a dynamic Queue of pointers of size 'size
		//node *p=new node;
		//p=NULL;
		//Q[f]=node(*p);
	}
	bool isEmpty(node *&head);//gives t/f value
	node*& getnode(node *&head,node *&last,int data);//,int distance,node*& parent,char color);//create the first node
	node*& createNode(node *&head,node *&last,int data);//,int distance,node*& parent,char color);//create the other nodes 
	void AdjList(node *&head,node *&last);//gets the data and sends to the createNode
	void Adjdisplay(node *&head);//display the nodes present in arr[i]
	int f=-1;
	int r=-1;
	node*& Enqueue(node *&head);//Enter a data into the Queue
	node*& Dequeue();//Return the first element of the Queue
	//void Qdisplay();//display the elements present in the Queue
	void BreadthFS(int s);//The Breadth First Search
};

bool BFS:: isEmpty(node *&head){
	if(head==NULL)
		return true;
	else
	return false;
}

node*& BFS:: getnode(node *&head,node *&last,int data){//,int distance,node*& parent,char color){
	node *n=new node;
	n->data=data;
	n->distance=999;
	n->parent=NULL;
	n->color='w';
	n->link=NULL;
	head=n;
	last=n;
	return head;
}

node*& BFS:: createNode(node *&head,node *&last,int data){//,int distance,node*& parent,char color){
	if(isEmpty(head)){
		head=getnode(head,last,data);//,distance,parent,color);
	}
	else{
		node *n=new node;
		n->data=data;
		n->distance=999;
		n->parent=NULL;
		n->color='w';
		n->link=head;
		head=n;
	}
	return head;
}

void BFS :: AdjList(node *&head,node *&last){
	int i,j,m,data,dis,parnt;
	char clr;
	node *h=new node;
	h=head;
	node *l=new node;
	l=last;
	node *v=new node;
	for(i=0;i<size;i++){
		node *ptr=new node;
		ptr=NULL;
		cout<<"How many Adjacency vertices are present in the node "<<i+1<<" ? ==>>"<<endl;
		cin>>m;
		for(j=0;j<m;j++){
			dis=999;
			clr='w';
			cout<<"Enter the "<<j+1<<" Adjacency Vertex for Vertex "<<i+1<<" ==>>"<<endl;//gives the next adjacent vertex
			cin>>data;
			node *prnt=new node;
			prnt=ptr;
			cout<<"The Parent of "<<data<<" is = "<<prnt<<endl;
			cout<<"The Distance From the Source Vertex ==>> INFINITE"<<endl;//gives the distance
			cout<<"The Color of the "<<data<<" Vertex ==>> "<<clr<<endl;//gives the color o' the adjacent vertex
			v=createNode(h,l,data-1);//,dis,prnt,clr);
			arr[i]=node(*v);
			select;v;
		}
		h=NULL;
		l=NULL;
	}
}

void BFS:: Adjdisplay(node *&head){
	int i;
	node *ptr=new node;
	//ptr=head;
	cout<<"**************************"<<endl;
	for(i=0;i<size;i++){
		ptr=&arr[i];
		cout<<"["<<i+1<<"] ==>> ";
		while(ptr!=NULL){
			cout<<"["<<ptr->data+1<<"]/"<<"D = "<<ptr->distance<<"/"<<"P = "<<ptr->parent<<"/"<<"C = "<<ptr->color<<" -->>";
			ptr=ptr->link;
		}
		select;ptr;
		cout<<"[/]"<<endl;
	}
	cout<<"**************************"<<endl;
}

node*& BFS :: Enqueue(node*& head){
	if(r==size){
		cout<<"Queue Overload !"<<endl;
	}
	else if(f==-1){
		f++;
	}
	r++;
	Q[r]=node(*head);
}

node*& BFS :: Dequeue(){
	node *ull=new node;
	if(f==-1){
		cout<<"Queue Underflow!"<<endl;
	}
	else{
		if(f==r){
			ull=&Q[f];
			cout<<"Dequeued Element is => "<<ull->data<<endl;
			return ull->link;
			node *p=new node;
			p=NULL;
			Q[f]=node(*p);
			f=-1;
			r=-1;
		}
		else{
			ull=&Q[f];
			cout<<"Dequeued Element is => "<<ull->data<<endl;
			return ull->link;
			node *p=new node;
			p=NULL;
			Q[f]=node(*p);
			f++;
		}
	}
}

void BFS :: BreadthFS(int s){
	int data=s-1;
	for(int i=0;i<size;i++){
		node *ptr=new node;
		ptr=&arr[i];
		while((ptr->data!=s-1) && (ptr!=NULL)){
			node *p=new node;
			p=NULL;
			if((ptr->data==s-1) && (&Q[0]==p)){
				ptr->distance=0;
				ptr->color='g';
				node *k=new node;
				k=&Q[0];
				if(k->data!=ptr->data){
					Enqueue(ptr);
				}
				k=NULL;
				select;k;
			}
			ptr=NULL;
			select;ptr;
			ptr=ptr->link;
		}
}
	
	/*for(int i=0;i<size;i++){
		node *ptr1=new node;
		ptr1=&arr[i];
		while(ptr1->data!=s){
			ptr1=ptr1->link;
		}
	}*/
	//node *k=new node;
	//k=&Q[0];
	//cout<<"Source Vertex is "<<s<<endl;
	while(&Q[0]!=NULL){
		node *u=new node;
		u=Dequeue();
		cout<<"Vertex no. "<<((u->data)+1)<<endl;
		node *x=new node;
		x=&arr[u->data];
		while(x!=NULL){
			if(x->color=='w'){
				Enqueue(x);
				x->color='g';
				x->parent=u;
				x->distance=(u->distance)+1;
			}
			x=x->link;
		}
		u->color='b';
	}
}

int main(){
	system("clear");
	int n,opt,s;
	node* head=NULL;
	node* last=NULL;
	cout<<"\t***BFS***"<<endl;
	cout<<"Enter the total no. of vertices present at the Graph G :-> "<<endl;
	cin>>n;
	BFS b(n);
	do{
		cout<<"\tBFS MENU(Main)"<<endl;
		cout<<"_ _ _ _ _ _ _ _ _ _ _"<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"1. Enter the Adjacency Vertex"<<endl;
		cout<<"2. Breadth First Search"<<endl;
		cout<<"3. Display the Graph by Adjacency List"<<endl;
		cout<<"_ _ _ _ _ _ _ _ _ _ _"<<endl;
		cin>>opt;
		switch(opt){
			case 0:
				cout<<"***GAME OVER***"<<endl;
			break;
			case 1:
				b.AdjList(head,last);
			break;
			case 2:
				cout<<"Enter The Source Vertex =>>"<<endl;
				cin>>s;
				b.BreadthFS(s);				
			break;
			case 3:
				b. Adjdisplay(head);
			break;
			default:
			cout<<"Wrong Choice... Choose Again..."<<endl;
			break;
		}
	}while(opt!=0);
	return 0;
}
