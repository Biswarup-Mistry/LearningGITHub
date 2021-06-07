#include<iostream>
using namespace std;

class matrix{
    private:
    int **a;
    int **b;
    public :
    int r,c,r1,c1;
    matrix(int size,int size1);
    void insert();
    void transpose();
    void display();
};

matrix :: matrix(int size,int size1){
    r=size;
    c=size1;
    //r1=c;
    //c1=r;
    a= new int*[r*c];
    b= new int*[c*r];
    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            a[i][j]=0;
        }
    }
    for(int i=0;i<c;i++){
       for (int j=0;j<r;j++){
            b[i][j]=0;
        }
    }
}

void matrix :: insert(){
    cout<<"Enter the Values Now ==>>"<<endl;
    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            cout<<"Enter the value of a["<<i<<"]["<<j<<"] ==>>"<<endl;
            cin>>a[i][j];
        }
    }
}

void matrix :: transpose(){
    cout<<"r = "<<r<<" c = "<<c<<endl;
    //cout<<"r1 = "<<r1<<" c1 = "<<c1<<endl;
    for (int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            b[i][j]=a[j][i];
        }
    }
}

void matrix :: display(){
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"a["<<i<<"]["<<j<<"] ==>>"<<a[i][j]<<endl;
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<"a^t["<<i<<"]["<<j<<"] ==>>"<<b[i][j]<<endl;
        }
    }
}

int main(){
    system("cls");
    int size,size1;
    cout<<"Enter the Row size ==>>"<<endl;
    cin>>size;
    cout<<"Enter the Column size ==>>"<<endl;
    cin>>size1;
    matrix m(size,size1);
    m.insert();
    m.transpose();
    m.display();
    return(0);
}