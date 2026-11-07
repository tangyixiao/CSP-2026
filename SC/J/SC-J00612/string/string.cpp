#include <bits/stdc++.h>
using namespace std;

int main(){
//  freopen("string.in","r",stdin);嗯对
//  freopen("string.out","w",stdout);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,s=0,tmp,ans=0;
	int S[200010];
	char a;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> tmp >> a;
		int c = a;
		for(int j=s;j<s+tmp;j++){
			S[j] = c;
		}
		s += tmp;
	}
	for(int i=0;i<=s/2-1;i++){
		if(S[i]!=S[s-i-1]) ans++;
	}
	cout << ans;
	return 0;
}
