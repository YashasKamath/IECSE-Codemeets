#include <bits/stdc++.h>
using namespace std;
int main() {

	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		multiset <long long> bags;
		for(int i = 0; i < n; i++){
			long long candy_ct;
			cin >> candy_ct;
			bags.insert(candy_ct);
		}
	long long total_candies = 0;
		for(int i = 0; i < k; i++){
			auto last_it = (--bags.end());
			long long candy_it = *last_it;
			total_candies += candy_it;
			bags.erase(last_it);
			bags.insert(candy_it/2);
		}
	cout << total_candies << endl;
	}
}