#include<iostream>
using namespace std;

class tiktaktoe{
	private :
	int arr[9];
	public :
	void play();
	void init();
	void show();
};

void tiktaktoe :: init(){
	int i;
	for(i=0;i<9;i++){
		arr[i]=9;
	}
	cout<<"<<<==TIK TAK TOE==>>>"<<endl<<endl;
	cout<<" 1  |2  |3  "<<endl;
	cout<<" ___|___|___"<<endl;
	cout<<" 4  |5  |6  "<<endl;
	cout<<" ___|___|___"<<endl;
	cout<<" 7  |8  |9  "<<endl;
	cout<<"    |   |   "<<endl<<endl;
	cout<<"<<<==Welcome To The Game==>>>"<<endl;
}

void tiktaktoe :: play(){
	string j;
	j="X";
	int u,l,i,k;
	cout<<"*|*|* For Player 1 it's X *|*|*"<<endl<<"*|*|* For Player 2 it's O *|*|*"<<endl;
		do{
		cout<<"1. Enter Position ==>>"<<endl;
		cout<<"0. Exit"<<endl;
		cin>>l;
		switch(l){
			case 0:
			break;
			case 1:
			do{
				cout<<"0. Exit"<<endl;	
				cout<<"1. for Player 1 "<<endl;
				cout<<"2. for Player 2 "<<endl;
				cin>>k;
				switch(k){
					case 0:
					break;
					case 1:
					cout<<"Enter the position fo Player 1 ==>>"<<endl;
					cin>>u;
					if(u>9){
						cout<<"Wrong Choise... Choose Again"<<endl;				
					}
					else
						arr[u-1]=1;
					cout<<"_ _ _ _ _ _ _ _ _"<<endl<<endl;
					for(i=0;i<3;i++){
						if(arr[i]==1){
							cout<<"|X|";
						}
						else if(arr[i]==0){
							cout<<"|O|";
						}
						else{
							cout<<"| |";
						}
					}
					cout<<" "<<endl;
					for(i=3;i<6;i++){
						if(arr[i]==1){
							cout<<"|X|";
						}
						else if(arr[i]==0){
							cout<<"|O|";
						}
						else{
							cout<<"| |";
						}
					}
					cout<<" "<<endl;
					for(i=6;i<9;i++){
						if(arr[i]==1){
							cout<<"|X|";
						}
						else if(arr[i]==0){
							cout<<"|O|";
						}
						else{
							cout<<"| |";
						}
					}
					cout<<endl<<"_ _ _ _ _ _ _ _ _"<<endl;
					if((arr[0]==1 && arr[1]==1 && arr[2]==1)||(arr[3]==1 && arr[4]==1 && arr[5]==1)||(arr[6]==1 && arr[7]==1 && arr[8]==1)||(arr[0]==1 && arr[3]==1 && arr[6]==1)||(arr[1]==1 && arr[4]==1 && arr[7]==1)||(arr[2]==1 && arr[5]==1 && arr[8]==1)||(arr[0]==1 && arr[4]==1 && arr[8]==1)||(arr[2]==1 && arr[4]==1 && arr[6]==1)){
						cout<<endl<<"*** Player 1 Wins The Game ***"<<endl<<endl<<"!!! GAME OVER !!!"<<endl;
						cout<<endl<<"*** Please, Re-Fresh The Game ***"<<endl;
					}
					break;
					case 2:
					cout<<"Enter the position for Player 2 ==>>"<<endl;
					cin>>u;
					if(u>9){
						cout<<"Wrong Choise... Choose Again"<<endl;
					}
					else
						arr[u-1]=0;
					cout<<"_ _ _ _ _ _ _ _ _"<<endl<<endl;
					for(i=0;i<3;i++){
						if(arr[i]==1){
							cout<<"|X|";
						}
						else if(arr[i]==0){
							cout<<"|O|";
						}
						else{
							cout<<"| |";
						}
					}
					cout<<" "<<endl;
					for(i=3;i<6;i++){
						if(arr[i]==1){
							cout<<"|X|";
						}
						else if(arr[i]==0){
							cout<<"|O|";
						}
						else{
							cout<<"| |";
						}
					}
					cout<<" "<<endl;
					for(i=6;i<9;i++){
						if(arr[i]==1){
							cout<<"|X|";
						}
						else if(arr[i]==0){
							cout<<"|O|";
						}
						else{
							cout<<"| |";
						}
					}
					cout<<endl<<"_ _ _ _ _ _ _ _ _"<<endl;
					if((arr[0]==0 && arr[1]==0 && arr[2]==0)||(arr[3]==0 && arr[4]==0 && arr[5]==0)||(arr[6]==0 && arr[7]==0 && arr[8]==0)||(arr[0]==0 && arr[3]==0 && arr[6]==0)||(arr[1]==0 && arr[4]==0 && arr[7]==0)||(arr[2]==0 && arr[5]==0 && arr[8]==0)||(arr[0]==0 && arr[4]==0 && arr[8]==0)||(arr[2]==0 && arr[4]==0 && arr[6]==0)){
						cout<<endl<<"*** Player 2 Wins The Game ***"<<endl<<endl<<"!!! GAME OVER !!!"<<endl;
						cout<<endl<<"*** Please, Re-Fresh The Game ***"<<endl;
					}
					break;
					default:
					cout<<"WRONG CHOISE... CHOOSE AGAIN"<<endl;
					break;
					}
			}while(k!=0);
			break;
			default:
			cout<<"WRONG CHOISE... CHOOSE AGAIN"<<endl;
			break;	
		}
	}while(l!=0);
}

void tiktaktoe :: show(){
	int i;
	cout<<"_ _ _ _ _ _ _ _ _"<<endl<<endl;
	for(i=0;i<3;i++){
		if(arr[i]==1){
			cout<<"|X|";
		}
		else if(arr[i]==0){
			cout<<"|O|";
		}
		else{
			cout<<"| |";
		}
	}
	cout<<" "<<endl;
	for(i=3;i<6;i++){
		if(arr[i]==1){
			cout<<"|X|";
		}
		else if(arr[i]==0){
			cout<<"|O|";
		}
		else{
			cout<<"| |";
		}
	}
	cout<<" "<<endl;
	for(i=6;i<9;i++){
		if(arr[i]==1){
			cout<<"|X|";
		}
		else if(arr[i]==0){
			cout<<"|O|";
		}
		else{
			cout<<"| |";
		}
	}
	cout<<endl<<"_ _ _ _ _ _ _ _ _"<<endl;
	if((arr[0]==1 && arr[1]==1 && arr[2]==1)||(arr[3]==1 && arr[4]==1 && arr[5]==1)||(arr[6]==1 && arr[7]==1 && arr[8]==1)||(arr[0]==1 && arr[3]==1 && arr[6]==1)||(arr[1]==1 && arr[4]==1 && arr[7]==1)||(arr[2]==1 && arr[5]==1 && arr[8]==1)||(arr[0]==1 && arr[4]==1 && arr[8]==1)||(arr[2]==1 && arr[4]==1 && arr[6]==1)){
		cout<<endl<<"*** Player 1 Wins The Game ***"<<endl<<endl<<"!!! GAME OVER !!!"<<endl;
		cout<<endl<<"*** Please, Re-Fresh The Game ***"<<endl;
	}
	if((arr[0]==0 && arr[1]==0 && arr[2]==0)||(arr[3]==0 && arr[4]==0 && arr[5]==0)||(arr[6]==0 && arr[7]==0 && arr[8]==0)||(arr[0]==0 && arr[3]==0 && arr[6]==0)||(arr[1]==0 && arr[4]==0 && arr[7]==0)||(arr[2]==0 && arr[5]==0 && arr[8]==0)||(arr[0]==0 && arr[4]==0 && arr[8]==0)||(arr[2]==0 && arr[4]==0 && arr[6]==0)){
		cout<<endl<<"*** Player 2 Wins The Game ***"<<endl<<endl<<"!!! GAME OVER !!!"<<endl;
		cout<<endl<<"*** Please, Re-Fresh The Game ***"<<endl;
	}
}

int main(){
	tiktaktoe t;
	int opt;
	t.init();
	do{
		cout<<"0. Re-Fresh"<<endl;
		cout<<"1. Play"<<endl;
		cout<<"2. Show Result"<<endl;
		cin>>opt;
		switch(opt){
		case 0:
		break;
		case 1:
		t.play();
		break;
		case 2:
		t.show();
		break;
		default:
		cout<<"WRONG CHOISE... CHOOSE AGAIN"<<endl;
		break;
		}
	}while(opt!=0);
	return 0;
}
