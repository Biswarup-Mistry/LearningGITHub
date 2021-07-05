//sudoku
#include<iostream>
#include<stdlib.h>
using namespace std;

class game{
    private:
    int **arr;
    public:
    int upper=10;
    int lower=0;
    int r=9,c=9;
    int num;
    game();
    void start();
    bool check(int row,int col,int num);
};

game :: game(){
    arr=new int*[r];
    for (int i=0;i<r;i++){
        arr[i]=new int[c];
    }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        arr[i][j]=0;
        }
    }
    for(int l=1;l<=6;l++){
        int m,n;
        m=rand() % 10;
        n=rand() % 10;
        int p=rand() % 10;
        if(arr[m][n]==0){
        	arr[m][n]=p;
        }
    }
    for (int i=0;i<r;i++){
		cout<<"-----------------------------------"<<endl;
		for(int j=0;j<c;j++){
		    cout<<"|"<<arr[i][j]<<"| ";
		}
		cout<<endl<<"-----------------------------------"<<endl;
	}
}

void game :: start(){
	int t,y;
	bool g=false;
	while(g==false){
		cout<<"Enter the Row ==>>"<<endl;
		cin>>t;
		cout<<"Enter the Coloumn ==>>"<<endl;
		cin>>y;
		cout<<"Enter Number ==>>"<<endl;
		cin>>num;
		g=check(t,y,num);
		arr[t-1][y-1]=num;
		for (int i=0;i<r;i++){
			cout<<"-----------------------------------"<<endl;
			for(int j=0;j<c;j++){
			    cout<<"|"<<arr[i][j]<<"| ";
			}
			cout<<endl<<"-----------------------------------"<<endl;
		}
	}
	if(g==true){
		cout<<"Solved Not Properly...\nGAME OVER..."<<endl;
	}
}

bool game :: check(int row,int col,int num){
	int i=row-1;
	int j=col-1;
	bool h=false;
	for(int m=0;m<9;m++){
		if(m!=i){
			if(arr[m][j]==num){
				h=true;
			}
		}
	}
	if(h==false){
		for(int n=0;n<9;n++){
			if(n!=j){
				if(arr[i][n]==num){
					h=true;
				}
			}
		}
	
	}
	return(h);
}

int main(){
    system("clear");
    cout<<"\tSUDOKU"<<endl;
    game g;
    g.start();
    return(0);
}
