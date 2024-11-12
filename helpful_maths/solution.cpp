#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>



using namespace std;

int main() {
	string input;
	vector<int> nums;
	
	cin >> input;
	
	stringstream ss(input);
	
	while(ss.good()) {
		string substr;
		getline(ss, substr, '+');
		nums.push_back(stoi(substr));
	}
	
	sort(nums.begin(), nums.end());

	
    for(int i = 0; i < nums.size(); i++) {
		cout << nums.at(i);
		if (i != nums.size() - 1) {
			cout << "+";
		}
		
	}
	

	return 0;
}
