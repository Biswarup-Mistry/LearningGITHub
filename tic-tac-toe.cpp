//tci-tac-toe
#include<iostream>
using namespace std;

class game{
    private:
    int *arr;
    public:
    int size;
    game(int n);
    void start(char p1,char p2);
    bool check();
};

game :: game(int n){
    size=n;
    arr= new int[size];
    for(int i=0;i<size;i++){
        arr[i]=9;
    }
}

void game :: start(char p1,char p2){
    int a=0;
    int k;
    bool g=true;
    cout<<" __  __  __"<<endl;
    cout<<"|1 ||2 ||3 |"<<endl;
    cout<<"|__||__||__|"<<endl;
    cout<<"|4 ||5 ||6 |"<<endl;
    cout<<"|__||__||__|"<<endl;
    cout<<"|7 ||8 ||9 |"<<endl;
    cout<<"|__||__||__|"<<endl;
    while((g==true) && (a<size)){
        cout<<"For Player 1 ==>>"<<endl;
        cout<<"Select Cell No. ==>> "<<endl;
        cin>>k;
        arr[k-1]=1;
        a++;
        cout<<" --  --  --"<<endl;
        for(int i=0;i<size;i+=3){
            for(int j=i;j<i+3;j++){
                if(arr[j]==1){
                    cout<<"|X |";
                }
                else if(arr[j]==0){
                    cout<<"|O |";
                }
                else cout<<"|  |";
            }
            cout<<endl;
            cout<<" --  --  --"<<endl;
        }
        
        g=check();
        if((g==true) && (a<size)){
            cout<<"For Player 2 ==>>"<<endl;
            cout<<"Select Cell No. ==>> "<<endl;
            cin>>k;
            arr[k-1]=0;
            a++;
        cout<<" --  --  --"<<endl;
        for(int i=0;i<size;i+=3){
            for(int j=i;j<i+3;j++){
                if(arr[j]==1){
                    cout<<"|X |";
                    }
                else if(arr[j]==0){
                    cout<<"|O |";
                    }
                else cout<<"|  |";
            }
            cout<<endl;
            cout<<" --  --  --"<<endl;
        }
        g=check();
        }
    }
    if((g==true) && (a=size)){
        cout<<"Draw Match !"<<endl;
        cout<<"GAME OVER !"<<endl;
    }
    else{
        cout<<"GAME OVER !"<<endl;
    }
}

bool game :: check(){
    if((arr[0]==1 && arr[1]==1 && arr[2]==1) ||(arr[3]==1 && arr[4]==1 && arr[5]==1) ||(arr[6]==1 && arr[7]==1 && arr[8]==1 )||(arr[0]==1 && arr[3]==1 && arr[6]==1 )||(arr[1]==1 && arr[4]==1 && arr[7]==1 )||(arr[2]==1 && arr[5]==1 && arr[8]==1 )||(arr[0]==1 && arr[4]==1 && arr[8]==1 )||(arr[2]==1 && arr[4]==1 && arr[6]==1)){
        cout<<"Player 1 Wins !"<<endl;
        return (false);
    }
    else if((arr[0]==0 && arr[1]==0 && arr[2]==0) ||(arr[3]==0 && arr[4]==0 && arr[5]==0) ||(arr[6]==0 && arr[7]==0 && arr[8]==0 )||(arr[0]==0 && arr[3]==0 && arr[6]==0 )||(arr[1]==0 && arr[4]==0 && arr[7]==0 )||(arr[2]==0 && arr[5]==0 && arr[8]==0 )||(arr[0]==0 && arr[4]==0 && arr[8]==0 )||(arr[2]==0 && arr[4]==0 && arr[6]==0)){
        cout<<"Player 2 Wins !"<<endl;
        return (false);
    }
    else{
        return(true);
    }
}

int main(){
    system("cls");
    cout<<"\tTIC_TAC_TOE"<<endl;
    int a=9;
    char p1='X',p2='O';
    game g(a);
    cout<<"The Character of Player 1 ==>> X"<<endl;
    cout<<"The Character of Player 2 ==>> O"<<endl;
    g.start(p1,p2);
    return(0);
}