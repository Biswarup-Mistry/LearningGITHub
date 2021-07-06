//matrixProduct
#include<iostream>
#include<cmath>
using namespace std;

class matrix{
private :
int **a;
int **b;
int **res;
public:
int size;
int r,c,r1,c1;
matrix(int size);
void product();
void display();
};

matrix :: matrix(int n){
	size=n;
	r=n;
	c=n;
	r1=r*r;
	c1=c*c;
	a=new int*[r];
	b=new int*[r];
	res=new int*[r1];
	for(int i=0;i<r;i++){
		a[i]=new int[c];
	}
	for(int i=0;i<r;i++){
		b[i]=new int[c];
	}
	for(int i=0;i<r1;i++){
		res[i]=new int[c1];
	}
	cout<<"Enter the elements of the first matrix ==>>"<<endl;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<"a["<<i<<"]["<<j<<"] ==>>";
			cin>>a[i][j];
		}
	}
	cout<<"Enter the elements of the first matrix ==>>"<<endl;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<"b["<<i<<"]["<<j<<"] ==>>";
			cin>>b[i][j];
		}
	}
}

void matrix :: product(){
int i=0;
int j=0;
	for(int m=0;m<size;m++){
	int p=0;
		while(p!=2){
			for(int m1=0;m1<size;m1++){
				for(int k=0;k<size;k++){
					res[i][j]=a[m][m1]*b[p][k];
					j++;
				}
			}
			i++;
			j=0;
			p++;
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
    cout<<"]*";
    cout<<"["<<endl;
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"]";
cout<<" = ["<<endl;
for(int i=0;i<r1;i++){
	for(int j=0;j<c1;j++){
		cout<<" "<<res[i][j]<<" ";
	}
	cout<<endl;
}
cout<<"]"<<endl;
}


int main(){
system("clear");
int size;
cout<<"\tMatrix Product"<<endl;
cout<<"Enter the size of the matrix ==>>"<<endl;
cin>>size;
matrix m(size);
m.product();
m.display();
return(0);
}
