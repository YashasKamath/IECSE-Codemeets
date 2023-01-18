#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
    	set <string> names;
        for (int i = 0; i < n; i++)
        {
            string name;
            cin >> name;
            names.insert(name);
        }
        for (auto name : names)
        {
            cout << name << endl;
        }
	}
}