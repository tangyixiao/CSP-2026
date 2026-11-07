#include <bits/stdc++.h>
using namespace std;
string S,s;
int c,n,L,cnt;
int main(){
	freopen("string.in","r", stdin);
	freopen("string.out", "w",stdout);
	bool hw = 1;
	cin >> n;
	for(int i = 1;i<=n;i++){
		cin >>c>>s;
		for(int j = 1;j<=c;j++){
			S+=s;
			L++;
		}
	}
	for(int i = 0;i<=L/2;i++){
		if(S[i]!=S[L-1-i]) {
			hw =0;
			cnt++;
		}	
	}
	if(hw) printf("%d",0);
	else printf("%d",cnt);
	return 0;
}
