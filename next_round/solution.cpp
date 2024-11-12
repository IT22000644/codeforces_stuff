#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> scores;
	int count, num, k, pass = 0;
	
	cin >> count;
	cin >> k;
	
	for(int i = 0; i < count; i++) {
		cin >> num;
		scores.push_back(num);
	}
	
	for(int i: scores) {
		if( i != 0 && i >= scores.at(k - 1)) pass++;
	}
	
	cout << pass << "\n";
	
	return 0;
}
