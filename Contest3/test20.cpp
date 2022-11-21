#include <bits/stdc++.h>

using namespace std;

int t; 
string s;

void xuli() {
    vector<int> pos;
    for (int i = 0; i < s.length(); ++i)
        if (s[i] == '[')
            pos.push_back(i);
    int cnt = 0, res = 0, id = 0;
    for (int i = 0; i < s.length(); i++) {
    	if(s[i] == '[') {
    		cnt += 1;
    		id += 1;
		} else {
			cnt += -1;
		}
        if (cnt < 0) {
            res += pos[id] - i;
            swap(s[pos[id]], s[i]);
            cnt = 1;
            id++;
        }
    }
    cout << res << '\n';
}

int main() {
    cin >> t;
    while(t--) {
    	cin >> s;
    	xuli();
	}
    return 0;
}
