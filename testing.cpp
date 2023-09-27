#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, res = "";
	getline(cin, s);
	for (char i = 0; i < s.size(); i++) {
		char c = s[i];
		if (c >= '0' && c <= '9') {
			res += c;
			continue;
		}
		if (c >= 'A' && c <= 'Z') {
			res += c;
			continue;
		}
		if (c >= 'a' && c <= 'z')
			res += (c - 32);
	}
	cout << res;
}