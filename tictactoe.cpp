#include <Iostream>
//add draw
using namespace std;
string board[] = {" "," "," "," "," "," "," "," "," "};
void draw(){
	cout<<board[0]<<"|"<<board[1]<<"|"<<board[2]<<endl;
	cout<<"-------"<<endl;
	cout<<board[3]<<"|"<<board[4]<<"|"<<board[5]<<endl;
	cout<<"-------"<<endl;
	cout<<board[6]<<"|"<<board[7]<<"|"<<board[8]<<endl;
}
int main(){
	bool game =  true;
		int position;
		for(int i=0;i<9;i++){
			if (i%2==0){
				cout<<"X turn"<<endl;
				cin>>position;
				if (board[position] == " "){
					board[position] = "x";
					draw();
				}
				else{
					cout<<"already taken";
				}
			}
			else{
					cout<<"0 turn"<<endl;
				cin>>position;
				if (board[position] == " "){
					board[position] = "o";
					draw();
				}
				else{
					cout<<"already taken";
				}
			}
			//win
			if(board[0] == "x" and board[1] =="x" and board[2]=="x" ){//top match
				cout<<"X wins"<<endl;
				break;
			}
			if(board[0] == "o" and board[1] =="o" and board[2]=="0" ){
				cout<<"0 wins"<<endl;
				break;
			}
			
			if(board[3] == "x" and board[4] =="x" and board[5]=="x" ){//middle match
				cout<<"X wins"<<endl;
				break;
			}
			if(board[3] == "o" and board[4] =="0" and board[5]=="0" ){//middle match
				cout<<"O wins"<<endl;
				break;
			}
			
			if(board[6] == "x" and board[7] =="x" and board[8]=="x" ){//bottom match
				cout<<"X wins"<<endl;
				break;
			}
			if(board[6] == "o" and board[7] =="o" and board[8]=="o" ){//botton match
				cout<<"O wins"<<endl;
				break;
			}
			
			if(board[0] == "x" and board[3] =="x" and board[6]=="x" ){//column1
				cout<<"X wins"<<endl;
				break;
			}
			if(board[0] == "o" and board[3] =="o" and board[6]=="o" ){//column1
				cout<<"O wins"<<endl;
				break;
			}
			
			if(board[1] == "x" and board[4] =="x" and board[7]=="x" ){//column2
				cout<<"X wins"<<endl;
				break;
			}
			if(board[1] == "o" and board[4] =="o" and board[7]=="o" ){//column2
				cout<<"O wins"<<endl;
				break;
			}
			
			if(board[2] == "x" and board[4] =="x" and board[8]=="x" ){//column3
				cout<<"X wins"<<endl;
				break;
			}
			if(board[2] == "o" and board[4] =="o" and board[8]=="o" ){//column3
				cout<<"O wins"<<endl;
				break;
			}
			
			if(board[6] == "x" and board[4] =="x" and board[2]=="x" ){//diagonalright
				cout<<"X wins"<<endl;
				break;
			}
			if(board[6] == "o" and board[4] =="o" and board[2]=="o" ){//diagonalright
				cout<<"O wins"<<endl;
				break;
			}
			if(board[8] == "x" and board[4] =="x" and board[0]=="x" ){//diagonalleft
				cout<<"X wins"<<endl;
				break;
			}
			if(board[8] == "o" and board[4] =="o" and board[0]=="o" ){//diagonalleft
				cout<<"O wins"<<endl;
				break;
			}
			
		}
			
}
