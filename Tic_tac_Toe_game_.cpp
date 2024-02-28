#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
//new_approach 
class Board {//Board Class Declare
private:
	//Varibales declare in Private acces modeifier
	int n;
	char sq[10] = { 'O','1','2','3','4','5','6','7','8','9' };
	//int n = 0;
	// string s;
	//Board(int n, string sq){s = sq;} //parameterized constructor//debug
public://public declare
	Board(){}//Default Constructor Declare//string sq = s; s = 0; }
	int CheckWin(int n, char sq[10]) {//CheckWin funct
		//Printing True(1)to the Game's Each Row and Col's Matched value
		if (sq[1] == sq[2] && sq[2] == sq[3])return 1;
		else if (sq[4] == sq[5] && sq[5] == sq[6])return 1;
		else if (sq[7] == sq[8] && sq[8] == sq[9])return 1;
		else if (sq[1] == sq[2] && sq[2] == sq[3])return 1;
		else if (sq[3] == sq[5] && sq[5] == sq[9])return 1;
		else if (sq[3] == sq[5] && sq[5] == sq[7])return 1;
		//Printing 0 to the non equal indx val
		else if (sq[1] != '1' && sq[2] != '2' && sq[3] != '3' && sq[5] != '5' && sq[6] != '6' && sq[7] != '7' && sq[8] != '8' && sq[9] != '9')return 0;
		else return -1;//printing -1 to the unmathced values
	}
	void DrawBoard(char sq[10]){//string sq) {//Drawinggame's UI
		//system(0);
		system("cls");//concurrently processes the storing values before the 1s process complestion
		//cout << "AI" << "Advance" << "Applicable";
		cout << "Tic Tac toe Game Using C++" << endl;
		cout << "|" << sq[1] << "|" << sq[2] << "|" << sq[3]<<"|" << endl;
		//cout << "--";
		cout << "|" <<sq[4]<< "|" << sq[5] << "|" << sq[6] << "|" << endl;
		cout << "|" << sq[7] << "|" << sq[8] << "|" << sq[9] <<"|" << endl;
	}
	void Player(int player, int i, int select, char mark, char sq[10]) {//Calculating The Player Game Moves
		player = -1, i,select;//Variables Declare
		DrawBoard(sq);//Drawing Game Board 
		//mark = (player == 0) ? 'O' : 'X';
		player = (player % 2) ? 1 : 2;//Player Divisble Moves
		mark = (player == 1) ? 'X' : 'O';//Checking To Print 'X' Or 'O' to The Player's Move
		cout << "Player(1)(X) -Player(2)(O) " << endl;//Printing Player's Difference MOves
		do {//iterating and
			cin >> select >> sq;//Game 's Input 
      //Checking the Player At Each [Indx] Values
			if (select == 1 && sq[1] == 1)sq[1] = mark;
			else if (select == 2 && sq[2] == '2')sq[2] = mark;
			else if (select == 3 && sq[3] == '3')sq[3] = mark;
			else if (select == 4 && sq[4] == '4')sq[4] = mark;
			else if (select == 5 && sq[5] == '5')sq[5] = mark;
			else if (select == 6 && sq[6] == '6')sq[6] = mark;
			else if (select == 7 && sq[7] == '7')sq[7] = mark;
			else if (select == 8 && sq[8] == '8')sq[8] = mark;
			else if (select == 9 && sq[9] == '9')sq[9] = mark;
			else player--; cout << "Invalid Move" << endl;//Printing The Invalid Move to unmatched Indx Val
		} while (i == -1); i = CheckWin(n, sq); player++;//Iteratively Chckeing Incrementing the Player's Move 
		cin.ignore(); cin.get();////fast input streat
		if (i == 1)cout << "Player" << player-- << endl;//Decrementing Player Move
		else cout << "Tie Game" << endl;//Printing Game Tie to bOth Player's Matched Score at Each [Indx] Val
	}
};
int main() {//Main func Declare
	int n = 0; int  player = 0, i = 0, select = 0; char mark = 0; char sq[10] = { '0','1','2','3','4','5','6','7','8','9' };//variables Declare and Initalize
	Board b;//Object declaration
	b.CheckWin(n, sq);//calling win funct
	b.Player(player, i, select, mark, sq);//Calling Player Funct
	b.DrawBoard(sq);//Calling DrawBoard Funct
	return 0;
}
