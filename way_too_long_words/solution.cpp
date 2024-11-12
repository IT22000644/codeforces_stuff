#include <iostream>
#include <string>

using namespace std;

int main() {
	int count;
	string text;
	
	cin >> count;
	
	for(int i = 0; i < count; i++) {
		cin >> text;
		
		int size = text.size();
		
		if (size > 10) {
			cout << text[0] << size - 2 << text[size -1] << "\n";
		} else {
			cout << text << "\n";
		}
	}
	
	
	return 0;
}
