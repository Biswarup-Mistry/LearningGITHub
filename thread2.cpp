#include <iostream>
#include <thread>
#include <stdlib.h>

using namespace std;

class thread_obj{
	public :
	 /*void operator()(int x) { 
        for (int i = 0; i < x; i++) 
            cout<<"In Child Thread :"<<i+1<<endl; 
			cout<<"* * * * * * * * * * *"<<endl;
    } */
	/*void operator()(int x){	
		for(int i =0;i<x;i++)
			cout<<"In Child Thread 2 \n";
	}*/
	void operator()(int x);
};

void thread_obj :: operator()(int x){
		while(x!=0){
			cout<<"In Child Thread 1 : "<<x<<endl;
			x--;
		}
	cout<<"Child Thread 1 Eixts"<<endl;
	cout<<"* * * * * * * * * * *"<<endl;
}

void foo(int z){
	for(int i=0;i<z;i++){
		cout<<"In Child Thread 2 :"<<i+1<<endl;
	}
	cout<<"Child Thread 2 Eixts"<<endl;
	cout<<"* * * * * * * * * * *"<<endl;
}

int main(){
	system("clear");
	int y=15;
	thread t1(thread_obj(), 10);
	thread t2(foo, 13);
	t1.join();
	t2.join();
	while(y!=0){
		cout<<"In Main Thread : "<<y<<endl;
		y--;
	}
	cout<<"Main Thread Eixts"<<endl;
	return 0;
}