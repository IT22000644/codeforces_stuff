#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int count;
	string prompt;
	
	
	
	int x = 0;
	
	cin >> count;
	
	for(int i = 0; i < count; i++) {
		cin >> prompt;
		if(prompt == "++X" || prompt == "X++") ++x;
		else x--;
	}
	
	cout << x;
	
	return 0;
}
