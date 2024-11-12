#include <iostream>
#include <vector>

using namespace std;

int main() {
	int num, count, sum, ans=0;
	vector<int> votes;
	
	cin >> count;
	
	for(int i = 0; i < count; i++) {
		sum = 0;
		for(int j = 0; j < 3; j++) {
			cin >> num;
			if (num == 1) sum++;
		}
		
		if (sum >= 2) ans++;	
		
	}
	
	cout << ans;
	
	
	return 0;
}
