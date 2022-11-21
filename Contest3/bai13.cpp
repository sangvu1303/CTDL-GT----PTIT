#include <bits/stdc++.h> 
#define MAX_CHAR 27
using namespace std;

int t, d;
char s[100007];

int nextChar(int freq[], int dist[]) { 
    int max = INT_MIN; 
    for (int i = 0; i < MAX_CHAR; i++) 
        if (dist[i] <= 0 && freq[i] > 0 && 
        (max == INT_MIN || freq[i] > freq[max])) 
                max = i;
    return max;
}

int xuli(char s[], int d) {
    int n = strlen(s);
    int freq[MAX_CHAR] = { 0 };
	 
    for (int i = 0; i < n; i++) 
        freq[s[i]]++; 
    int dist[MAX_CHAR] = { 0 };
    for (int i = 0; i < n; i++) {  
        int j = nextChar(freq, dist); 
        if (j == INT_MIN) 
            return 0;
        freq[j]--;
        dist[j] = d;
        for (int i = 0; i < MAX_CHAR; i++) 
            dist[i]--; 
    } 
    return 1; 
}
int main() {
	cin >> t;
	while(t--) {
		cin >> d;
		cin >> s;
		int n = strlen(s);
	  
	    if (xuli(s, 2)) 
	        cout << "1" << "\n"; 
	    else
	        cout << "-1";
	} 
  
    return 0; 
} 
