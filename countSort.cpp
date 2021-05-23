#include<iostream>
using namespace std;

int main(){
    int n,i;
    int m=10;
    cout<<"Enter the size of the array ==>>"<<endl;
    cin>>n;
    int *a=new int[n];
    int *d = new int[n];
    cout<<"Enter the elements now ==>>"<<endl;
  for(i=0;i<n;i++){	
        cin>>a[i];
		d[i]=0;
	}
    int *b=new int[m];
	for(i=0;i<m;i++){
		b[i]=0;
	}
    for(i=0;i<n;i++){	
		b[a[i]]=b[a[i]]+1;
	}
	for(i=1;i<m;i++){	
		b[i]=b[i]+b[i-1];
	}
	for(i=n-1;i>=0;i--){	
		int k=a[i];
		d[b[k]-1]=k;
		b[k]=b[k]-1;
	}
	for(i=0;i<n;i++){
		a[i]=d[i];
	}
    cout<<"After sorting..."<<endl;
    for(i=0;i<n;i++){
		cout<<"a["<<i<<"] ==>> "<<a[i]<<endl;
	}
    return (0);

}