#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m,k,s[1000010],l,r,ans,len[1000010];
char in;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for(int a = 1;a <= n;a++){
		cin >> len[a] >> in;
		s[a] = in - 'a';
	}
	l = 1;
	r = n;
	while(l < r){
		if(len[l] == len[r]){
			if(s[l] != s[r]) ans += len[l];
			l++;
			r--;
		} 
		else if(len[l] > len[r]){
			if(s[l] != s[r]) ans += len[r];
			len[l] -= len[r];
			r--;
		}
		else{
			if(s[l] != s[r]) ans += len[l];
			len[r] -= len[l];
			l++;
		}
		//cout << l << " " << r << " " << ans << endl;
	}
	cout << ans;
	return(0);
} 
