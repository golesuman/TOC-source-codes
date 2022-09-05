#include<iostream>
using namespace std;

int main(void){
    int i;

    int TransactionTable[3][2] = {
	{2, 1},
    {2, 1},
    {2, 1}
    };

    int StartingState, AcceptingState, State,x;

    StartingState = 0;
    AcceptingState = 2;
    State = StartingState;

    string w = "0111111110";

    i = 0;
	cout<<"Initial State : S"<< StartingState <<endl;
    cout << "\nCurrent State\tSymbol to Process\tNext State"<<endl;
    cout << "=============\t=================\t=========="<<endl;
	while( i < w.length()){
        x=State;
		State = TransactionTable[State][(w[i] - '0')];
		cout << "     S"<< x <<"\t\t\t"<< w[i]-'0' <<"\t\t    S"<<State<<endl;
		i++;
    }
	cout<<"=================================================="<<endl;
    cout<<"The last state we achieve after processing given string : "<<w <<" is S"<<State<<endl;
	if( State == AcceptingState ){
		cout <<"\n"<< w <<" is Accepted !!!"<<endl;
    }
    else{
		cout <<"\n" <<w <<" is Rejected !!!"<<endl;
    }

    return 0;
}
