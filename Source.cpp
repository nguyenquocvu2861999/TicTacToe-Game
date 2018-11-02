#include<iostream>
using namespace std;

int checkLogic(char a[10], int input);
void Board(char a[10]);
bool checkWin(char a[10]);

int main()
{
	
	char a[10] = {'1','2','3','4','5','6','7','8','9' };
	int input=12;
	int player=1;
	char mark;
	while (checkWin(a)!=1)
	{	
		Board(a);
		player = (player % 2) ? 1 : 2;
		mark = (player == 1) ? 'X' : 'O';
		cout << "PLAYER " << player << " MOVE :";
		cin >> input;
		while (checkLogic(a, input) == 0)
		{
			cout << "Invaild Input\n\n";
			cout << "PLAYER " << player << " MOVE :";
			cin >> input;
		}
		a[input - 1] = mark;
		player++;
		input++;
	}
	Board(a);
	player = player--;
	printf("\n\t  PLAYER %d WIN\n\n", player);
	system("pause");
}

bool checkWin(char a[10])
{
	if (a[0] == a[1] && a[1] == a[2])
		return 1;
	if (a[3] == a[4] && a[4] == a[5])
		return 1;
	if (a[6] == a[7] && a[7] == a[8])
		return 1;
	if (a[0] == a[4] && a[4] == a[8])
		return 1;
	if (a[2] == a[4] && a[4] == a[6])
		return 1;
	if (a[0] == a[3] && a[3] == a[6])
		return 1;
	if (a[1] == a[4] && a[4] == a[7])
		return 1;
	if (a[2] == a[5] && a[5] == a[8])
		return 1;
	else return 0;
}
void Board(char a[10])
{
	system("cls");
	printf("\t   TIC TAC TOE \n");
	printf("    Player 1 (X) - Player 2 (O)\n");
	printf("\t"); printf("|    |    |    |\n");
	printf("\t"); printf("|  %c |  %c | %c  |\n", a[0], a[1], a[2]);
	printf("\t"); printf("|____|____|____|\n");
	printf("\t"); printf("|    |    |    |\n");
	printf("\t"); printf("|  %c |  %c | %c  |\n", a[3], a[4], a[5]);
	printf("\t"); printf("|____|____|____|\n");
	printf("\t"); printf("|    |    |    |\n");
	printf("\t"); printf("|  %c |  %c | %c  |\n", a[6], a[7], a[8]);
	printf("\t"); printf("|    |    |    |\n");

}
int checkLogic(char a[10], int input)
{
	if (input == 1 && a[0] == '1')
		return 1;
	if (input == 2 && a[1] == '2')
		return 1;
	if (input == 3 && a[2] == '3')
		return 1;
	if (input == 4 && a[3] == '4')
		return 1;
	if (input == 5 && a[4] == '5')
		return 1;
	if (input == 6 && a[5] == '6')
		return 1;
	if (input == 7 && a[6] == '7')
		return 1;
	if (input == 8 && a[7] == '8')
		return 1;
	if (input == 9 && a[8] == '9')
		return 1;

	else return 0;
}