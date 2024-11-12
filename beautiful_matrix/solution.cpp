#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int mx[5][5] = {0};
	int ans;
	
	
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			cin >> mx[i][j];
		}
	}
	
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			if (mx[i][j] == 1) {
				ans = abs(i - 2) + abs(j - 2);
			}
		}
	}
	
	cout << ans;
	
	
	return 0;
}
