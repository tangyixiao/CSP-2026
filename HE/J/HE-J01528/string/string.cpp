#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);cin.tie(nullptr); 
	int n; cin>>n;
	string s = "";
	unsigned long long L=0;
	for(int i=1;i<=n;i++){
		int x; cin>>x;L+=x;
		char a; cin>>a;
		while(x--) s += a;
	}
	unsigned long long i=0,j=L-1;
	unsigned long long ans = 0;
	while(i<=j){
		if(s[i] != s[j]) ans++;
		i++;j--;
	}
	cout<<ans<<'\n';
	return 0;
}

