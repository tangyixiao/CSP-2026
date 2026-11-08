#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,x=0;
	cin >>n;
	int t[n+5];
	char s[n+5];
	for(int i=0;i<n;i++) {
		cin >> t[i] >> s[i];
		x+=t[i];
		if(i>0){
			if(s[i]==s[i-1]){
				t[i-1]+=t[i];
				i--;
				n--;
			}
		}
	}
	if(n==1) cout << 0;
	else if(n==2) cout << min(t[0],t[1]);
	return 0;
} 
