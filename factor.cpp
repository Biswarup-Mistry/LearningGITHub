#include<iostream>
using namespace std;

int main(){
    int i,n;
    int k=0;
    int m=10000;
    int *a=new int[m];
    cout<<"Enter the number ==>>"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        if(n%i==0){
            a[k]=i;
            k++;
        }
    }
    cout<<"The factors of the number "<<n<<" is ==>>"<<endl;
    for(i=0;i<k;i++){
        cout<<a[i]<<endl;
    }
    return(0);
}