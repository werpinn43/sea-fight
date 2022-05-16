#include <iostream>
#include <cstdlib>
using std::cout;
using std::cin;

void print(char cols[10], int rows[10]){
	for (int i = 0; i < 10; i++) {
		rows[i] = i + 1;
		cout << ' ' << rows[i] << '_' << ' ';
		
	}
	cout << '\n';
	for (int i = 0; i < 10; i++) {
		cols[i] = i + 'A';
		cout << cols[i] << '|' << '\n';
	}
	
}

void gamemenu(int anykey) {
	int choice;
	cout << '\t' << "start game - press '1'" << '\n';
	cout << '\t' << "quit - press '2'" << '\n';
	cin >> choice;
	switch (choice) {
	case 1:
		break;
	case 2:
		cout << "ok( see you!";
		break;
	default:
		cout << "wrong number! press '1' to start game, or '2' to quit";
		break;
	}
}

struct shp {
	int length;
	int location_cols[10];
	char location_rows['A' * 10];

};

void print_ships() {

}

bool playerchoice(char let, int count) {
	if (let < 'A' && let > 'F') {
		if (count < 1 && count > 10) {
			cout << "you cannot choose this cell. try again (rows A - F; cols 1 - 10";
		}
		
	}
	else{
		return count;
	}
	return let;
}