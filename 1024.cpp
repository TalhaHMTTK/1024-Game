#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <random>

int counter;

using namespace std;

void box(int table[][4]);

int random(int n);

int random_row(int n);

int random_column(int n);

void fill(int table[][4]);

void shift_left(int table[][4]);

void shift_right(int table[][4]);

void shift_up(int table[][4]);

void shift_down(int table[][4]);

bool win(int table[][4]);

bool lose(int table[][4]);

void game();

int main()
{
	game();

}

void box(int table[][4])
{

	cout << "________________________________________" << endl;
	cout << "|" << setw(10) << "|" << setw(10) << "|" << setw(10) << "|" << setw(10) << "|" << endl;
	cout << "|" << setw(10) << "|" << setw(10) << "|" << setw(10) << "|" << setw(10) << "|" << endl;
	cout << "|" << setw(5);

	if (table[0][0] != 0) {
		cout << table[0][0];
	}
	else {
		cout << " ";
	}

	cout << setw(5) << "|" << setw(5);

	if (table[0][1] != 0) {
		cout << table[0][1];
	}
	else {
		cout << " ";
	}

	cout << setw(5) << "|" << setw(5);

	if (table[0][2] != 0) {
		cout << table[0][2];
	}
	else {
		cout << " ";
	}

	cout << setw(5) << "|" << setw(5);

	if (table[0][3] != 0) {
		cout << table[0][3];
	}
	else {
		cout << " ";
	}

	cout << setw(5) << "|" << endl;
	cout << "|" << setw(10) << "|" << setw(10) << "|" << setw(10) << "|" << setw(10) << "|" << endl;
	cout << "|_________|_________|_________|_________|" << endl;
	cout << "|" << setw(10) << "|" << setw(10) << "|" << setw(10) << "|" << setw(10) << "|" << endl;
	cout << "|" << setw(10) << "|" << setw(10) << "|" << setw(10) << "|" << setw(10) << "|" << endl;
	cout << "|" << setw(5);

	if (table[1][0] != 0) {
		cout << table[1][0];
	}
	else {
		cout << " ";
	}

	cout << setw(5) << "|" << setw(5);

	if (table[1][1] != 0) {
		cout << table[1][1];
	}
	else {
		cout << " ";
	}

	cout << setw(5) << "|" << setw(5);

	if (table[1][2] != 0) {
		cout << table[1][2];
	}
	else {
		cout << " ";
	}

	cout << setw(5) << "|" << setw(5);
	if (table[1][3] != 0) {
		cout << table[1][3];
	}
	else {
		cout << " ";
	}

	cout << setw(5) << "|" << endl;
	cout << "|" << setw(10) << "|" << setw(10) << "|" << setw(10) << "|" << setw(10) << "|" << endl;
	cout << "|_________|_________|_________|_________|" << endl;
	cout << "|" << setw(10) << "|" << setw(10) << "|" << setw(10) << "|" << setw(10) << "|" << endl;
	cout << "|" << setw(10) << "|" << setw(10) << "|" << setw(10) << "|" << setw(10) << "|" << endl;
	cout << "|" << setw(5);

	if (table[2][0] != 0) {
		cout << table[2][0];
	}
	else {
		cout << " ";
	}

	cout << setw(5) << "|" << setw(5);

	if (table[2][1] != 0) {
		cout << table[2][1];
	}
	else {
		cout << " ";
	}

	cout << setw(5) << "|" << setw(5);

	if (table[2][2] != 0) {
		cout << table[2][2];
	}
	else {
		cout << " ";
	}

	cout << setw(5) << "|" << setw(5);

	if (table[2][3] != 0) {
		cout << table[2][3];
	}
	else {
		cout << " ";
	}

	cout << setw(5) << "|" << endl;
	cout << "|" << setw(10) << "|" << setw(10) << "|" << setw(10) << "|" << setw(10) << "|" << endl;
	cout << "|_________|_________|_________|_________|" << endl;
	cout << "|" << setw(10) << "|" << setw(10) << "|" << setw(10) << "|" << setw(10) << "|" << endl;
	cout << "|" << setw(10) << "|" << setw(10) << "|" << setw(10) << "|" << setw(10) << "|" << endl;
	cout << "|" << setw(5);

	if (table[3][0] != 0) {
		cout << table[3][0];
	}
	else {
		cout << " ";
	}

	cout << setw(5) << "|" << setw(5);

	if (table[3][1] != 0) {
		cout << table[3][1];
	}
	else {
		cout << " ";
	}

	cout << setw(5) << "|" << setw(5);

	if (table[3][2] != 0) {
		cout << table[3][2];
	}
	else {
		cout << " ";
	}

	cout << setw(5) << "|" << setw(5);

	if (table[3][3] != 0) {
		cout << table[3][3];
	}
	else {
		cout << " ";
	}

	cout << setw(5) << "|" << endl;
	cout << "|" << setw(10) << "|" << setw(10) << "|" << setw(10) << "|" << setw(10) << "|" << endl;
	cout << "|_________|_________|_________|_________|";

}

int random(int n)
{
	int num;
	if (n < 0) {
		n = -n;
	}
	num = (n % 2) + 1;
	return num;

}

int random_row(int n)
{
	int num;
	num = n;
	if (num < 0) {
		num = -num;
	}
	return num % 4;

}

int random_column(int n)
{
	int num;
	num = n;
	if (num < 0) {
		num = -num;
	}
	return num % 4;

}

void game()
{
	int table[4][4];
	int row, column;
	char move;
	int c = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			table[i][j] = 0;
		}
	}

	int r[3];
	int rn, rr, rc;
	for (int j = 0; j < 2; j++) {
		mt19937 x(time(0));
		for (int i = 0; i < 3; i++) {
			r[i] = x();
		}

		rn = random(r[0]);
		rr = random_row(r[1]);
		rc = random_column(r[2]);

		table[rr][rc] = rn;
	}
	box(table);

	system("cls");
	counter = 1;
	fill(table);

	cout << endl;

	while (1) {

		cout << endl << "make a move: ";
		move = _getch();
		cout << move << endl;

		if (move == 'w' || move == 'W') {
			system("cls");
			cout << "Up" << endl;

			shift_up(table);

			if (win(table) || lose(table)) {
				break;
			}

			fill(table);

		}
		else if (move == 's' || move == 'S') {
			system("cls");
			cout << "Down" << endl;

			shift_down(table);

			if (win(table) || lose(table)) {
				break;
			}

			fill(table);
		}
		else if (move == 'a' || move == 'A') {
			system("cls");
			cout << "left" << endl;

			shift_left(table);

			if (win(table) || lose(table)) {
				break;
			}

			fill(table);

		}
		else if (move == 'd' || move == 'D') {
			system("cls");
			cout << "right" << endl;

			shift_right(table);

			if (win(table) || lose(table)) {
				break;
			}

			fill(table);

		}
		else {
			continue;
		}
	}

}

void fill(int table[][4])
{
	if (counter != 0) {
		int r[3];
		int c, row, column;
		int rn, rr, rc;
		mt19937 x(time(0));
		for (int i = 0; i < 3; i++) {
			r[i] = x();
		}

		rn = random(r[0]);
		rr = random_row(r[1]);
		rc = random_column(r[2]);

		if (table[rr][rc] == 0) {
			table[rr][rc] = rn;
		}
		else {
			while (table[rr][rc] > 0) {

				mt19937 x(time(0));
				for (int i = 0; i < 3; i++) {
					r[i] = x();
				}

				rn = random(r[0]);
				rr = random_row(r[1]);
				rc = random_column(r[2]);

				c = 0;
				for (int i = 0; i < 4; i++) {
					for (int j = 0; j < 4; j++) {
						if (table[i][j] == 0) {
							c++;
							row = i;
							column = j;
						}
					}
				}
				if (c == 1 || c == 2 || c == 3 || c == 4) {
					table[row][column] = rn;
					break;
				}

				else if (table[rr][rc] > 0) {
					continue;
				}
				else {
					table[rr][rc] = rn;
					break;
				}
			}
		}
	}

	box(table);

}

void shift_left(int table[][4])
{
	bool t = true;
	counter = 0;

f:
	int gocounter = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (table[i][j] == 0) {
				for (int k = j; k < 3; k++) {
					table[i][k] = table[i][k + 1];
					if (table[i][k] != 0) {
						counter++;
					}
					if (k == 2) {
						table[i][k + 1] = 0;
					}
				}
				if (table[i][j] == 0) {
					for (int k = j; k < 3; k++) {
						table[i][k] = table[i][k + 1];
						if (table[i][k] != 0) {
							counter++;
						}
						if (k == 2) {
							table[i][k + 1] = 0;
						}
					}
				}
				if (table[i][j] == 0) {
					for (int k = j; k < 3; k++) {
						table[i][k] = table[i][k + 1];
						if (table[i][k] != 0) {
							counter++;
						}
						if (k == 2) {
							table[i][k + 1] = 0;
						}
					}
				}
			}
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (table[i][j] == table[i][j + 1] && table[i][j] != 0 && t == true) {
				table[i][j] = ((table[i][j + 1]) + (table[i][j]));
				table[i][j + 1] = 0;
				counter++;
				gocounter++;
			}
		}
	}
	t = false;
	if (gocounter > 0) {
		goto f;
	}

}

void shift_right(int table[][4])
{
	bool t = true;
	counter = 0;

f:
	int gocounter = 0;

	for (int i = 3; i >= 0; i--) {
		for (int j = 3; j >= 0; j--) {
			if (table[i][j] == 0) {
				for (int k = j; k > 0; k--) {
					table[i][k] = table[i][k - 1];
					if (table[i][k] != 0) {
						counter++;
					}
					if (k == 1) {
						table[i][k - 1] = 0;
					}
				}
			}
			if (table[i][j] == 0) {
				for (int k = j; k > 0; k--) {
					table[i][k] = table[i][k - 1];
					if (table[i][k] != 0) {
						counter++;
					}
					if (k == 1) {
						table[i][k - 1] = 0;
					}
				}
			}
			if (table[i][j] == 0) {
				for (int k = j; k > 0; k--) {
					table[i][k] = table[i][k - 1];
					if (table[i][k] != 0) {
						counter++;
					}
					if (k == 1) {
						table[i][k - 1] = 0;
					}
				}
			}
		}
	}

	for (int i = 3; i >= 0; i--) {
		for (int j = 3; j >= 0; j--) {
			if (table[i][j] == table[i][j - 1] && table[i][j] != 0 && t == true) {
				table[i][j] = ((table[i][j]) + (table[i][j - 1]));
				table[i][j - 1] = 0;
				j--;
				counter++;
				gocounter++;
			}
		}
	}
	t = false;
	if (gocounter > 0) {
		goto f;
	}

}

void shift_up(int table[][4])
{
	bool t = true;
	counter = 0;

f:
	int gocounter = 0;

	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 4; i++) {
			if (table[i][j] == 0) {
				for (int k = i; k < 3; k++) {
					table[k][j] = table[k + 1][j];
					if (table[k][j] != 0) {
						counter++;
					}
					if (k == 2) {
						table[k + 1][j] = 0;
					}
				}
			}
			if (table[i][j] == 0) {
				for (int k = i; k < 3; k++) {
					table[k][j] = table[k + 1][j];
					if (table[k][j] != 0) {
						counter++;
					}
					if (k == 2) {
						table[k + 1][j] = 0;
					}
				}
			}
			if (table[i][j] == 0) {
				for (int k = i; k < 3; k++) {
					table[k][j] = table[k + 1][j];
					if (table[k][j] != 0) {
						counter++;
					}
					if (k == 2) {
						table[k + 1][j] = 0;
					}
				}
			}
		}
	}

	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 4; i++) {
			if (table[i][j] == table[i + 1][j] && table[i][j] != 0 && t == true) {
				table[i][j] = ((table[i][j]) + (table[i + 1][j]));
				table[i + 1][j] = 0;
				counter++;
				gocounter++;
			}
		}
	}
	t = false;
	if (gocounter > 0) {
		goto f;
	}

}

void shift_down(int table[][4])
{
	bool t = true;
	counter = 0;

f:
	int gocounter = 0;

	for (int j = 3; j >= 0; j--) {
		for (int i = 3; i >= 0; i--) {
			if (table[i][j] == 0) {
				for (int k = i; k > 0; k--) {
					table[k][j] = table[k - 1][j];
					if (table[k][j] != 0) {
						counter++;
					}
					if (k == 1) {
						table[k - 1][j] = 0;
					}
				}
			}
			if (table[i][j] == 0) {
				for (int k = i; k > 0; k--) {
					table[k][j] = table[k - 1][j];
					if (table[k][j] != 0) {
						counter++;
					}
					if (k == 1) {
						table[k - 1][j] = 0;
					}
				}
			}
			if (table[i][j] == 0) {
				for (int k = i; k > 0; k--) {
					table[k][j] = table[k - 1][j];
					if (table[k][j] != 0) {
						counter++;
					}
					if (k == 1) {
						table[k - 1][j] = 0;
					}
				}
			}
		}
	}

	for (int j = 3; j >= 0; j--) {
		for (int i = 3; i >= 0; i--) {
			if (table[i][j] == table[i - 1][j] && table[i][j] != 0 && t == true) {
				table[i][j] = ((table[i][j]) + (table[i - 1][j]));
				table[i - 1][j] = 0;
				counter++;
				gocounter++;
			}
		}
	}
	t = false;
	if (gocounter > 0) {
		goto f;
	}
}

bool win(int table[][4])
{
	int i = 0, j = 0;
	bool win = false;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (table[i][j] == 1024) {
				cout << endl << endl << "YOU WIN!" << endl;
				win = true;
				break;
			}
		}
		if (table[i][j] == 1024) {
			win = true;
			box(table);
			break;
		}
	}

	return win;

}

bool lose(int table[][4])
{
	bool lost = false;
	bool filled = false;

	for (int k = 0; k < 4; k++) {
		for (int l = 0; l < 4; l++) {
			if (table[k][l] == 0) {
				filled = false;
				break;
			}
			else {
				filled = true;
			}
		}
		if (!filled) {
			break;
		}
	}
	if (filled) {
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 3; j++) {
				if (table[i][j] == table[i][j + 1]) {
					lost = false;
					break;
				}
				else {
					lost = true;
				}
			}
			if (!lost) {
				break;
			}
		}

		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 3; j++) {
				if (table[j][i] == table[j + 1][i]) {
					lost = false;
					break;
				}
				else {
					lost = true;
				}
			}
			if (!lost) {
				break;
			}
		}

		for (int i = 3; i > 0; i--) {
			for (int j = 3; j > 0; j--) {
				if (table[j][i] == table[j - 1][i]) {
					lost = false;
					break;
				}
				else {
					lost = true;
				}
			}
			if (!lost) {
				break;
			}
		}

		for (int i = 3; i > 0; i--) {
			for (int j = 3; j > 0; j--) {
				if (table[i][j] == table[i][j - 1]) {
					lost = false;
					break;
				}
				else {
					lost = true;
				}
			}
			if (!lost) {
				break;
			}
		}
	}

	if (lost) {
		box(table);
		cout << endl << "YOU LOSE!";
	}

	return lost;
}