//Add two Matrices

#include<iostream>
using namespace std;

class matrix{
    private:
    int **a;
    int **b;
    int **res;
    public :
    int r,c;
    matrix(int size,int size1);
    void insert();
    void add();
    void display();
};

matrix :: matrix(int size,int size1){
    r=size;
    c=size1;
    a= new int*[r];
    b= new int*[r];
    res= new int*[r];
    for(int i=0;i<r;i++){
    	a[i]=new int[c];
    }
    for(int i=0;i<r;i++){
    	b[i]=new int[c];
    }
    for(int i=0;i<r;i++){
    	res[i]=new int[c];
    }
    for(int i=0;i<r;i++){
	    for(int j=0;j<c;j++){
	    	a[i][j]=0;
	    }
    }
    for(int i=0;i<r;i++){
	    for(int j=0;j<c;j++){
	    	b[i][j]=0;
	    }
    }
    for(int i=0;i<r;i++){
	    for(int j=0;j<c;j++){
	    	res[i][j]=0;
	    }
    }
}

void matrix :: insert(){
	int k;
	cout<<"Enter the Elements of 1st Matrix ==>>"<<endl;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<"Enter the value of a["<<i<<"]["<<j<<"] ==>>"<<endl;
			cin>>k;
			a[i][j]=k;
		}
	}
	cout<<"Enter the Elements of 2nd Matrix ==>>"<<endl;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<"Enter the value of a["<<i<<"]["<<j<<"] ==>>"<<endl;
			cin>>k;
			b[i][j]=k;
		}
	}
}

void matrix :: add(){
    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            res[i][j]=b[i][j]+a[i][j];
        }
    }
}

void matrix :: display(){
cout<<endl;
cout<<"["<<endl;
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"]+";
    cout<<"["<<endl;
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"]";
cout<<" = ["<<endl;
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"]"<<endl;
}

int main(){
    system("clear");
    cout<<"Adding of a Matrices"<<endl;
    int size,size1;
    cout<<"Enter the Row size ==>>"<<endl;
    cin>>size;
    cout<<"Enter the Column size ==>>"<<endl;
    cin>>size1;
    matrix m(size,size1);
    m.insert();
    m.add();
    m.display();
    return(0);
}
