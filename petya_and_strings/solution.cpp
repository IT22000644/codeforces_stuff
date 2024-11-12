#include <iostream>
#include <string>
#include <cctype>
#include <cmath>

using namespace std;

int main() {
	string str1, str2;
	int ans = 0;
	cin >> str1 >> str2;
	
	for(int i = 0; i < str1.length(); i++) {
		if (tolower(str1[i]) - tolower(str2[i]) < 0) {
			ans = -1;
			break;
		}
		else if (tolower(str1[i]) - tolower(str2[i]) > 0) {
			ans = 1;
			break;
		}
	}
	
	cout << ans << "\n";
	
	
	
	return 0;
		
}
