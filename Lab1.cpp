#include <iostream>

using namespace std;

int main() {
    int row;
	int height;
		
    cout << endl << "Pyramid Level Height: ";
	cin >> row;
	row = row + 1;
    for (int i = 1, j = 0, k = 0; i <= row; i++, j = 0, k = 0) {
		cout << endl;
		for (int a = 1; a <= row - i; a++) {
			cout << " ";
		}
		if (i != row) {
			while (j != 2 * i - 1) {
				cout << "-";
				j++;
			}
		} else {
			cout << " ";
			while (j != 2 * i - 3) {
				cout << "-";
				j++;
			}
		}
		cout << endl;
		for (int b = 2; b <= row - i; b++) {
			cout << " ";
		}
		if (i != row) {
			if (i == 1) {
				while (k != 2 * i) {
					cout << "| ";
					k++;
				}
			} else {
				while (k != i + 1) {
					cout << "| ";
					k++;
				}
			}
		}
	}
    return 0;
}