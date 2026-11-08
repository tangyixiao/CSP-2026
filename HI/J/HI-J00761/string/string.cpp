#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string S;
ll cnt = 0, a, cnt2 = 0;
char c;
int p;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin >> p;
	for (int i = 1; i <= p; i++) {
		cin >> a >> c;
		for (int j = 1; j <= a; j++) {
			S[cnt] = c;
			cnt ++;
		}
	}
	for (int i = 0; i < cnt/2; i++) {
		if (S[i] != S[cnt - i]) cnt2 ++;
	} 
	cout << cnt2;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}

