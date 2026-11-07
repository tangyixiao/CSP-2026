#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5+5;

struct cc{
	ll a;
	char c;
};

ll ans = 0;

cc s[N];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	
	
	int n;
	cin >> n;
	for(int i = 1;i<=n;++i){
		cin >> s[i].a >> s[i].c;
	}
	
	ll l = 1,r = n;
	while(l<r){
		if(s[l].c == s[r].c){
			ll down = min(s[l].a,s[r].a);
			s[l].a -= down;
			s[r].a -= down;
			if(s[l].a == 0) l++;
			if(s[r].a == 0) r--;
		}
		else{
			ll down = min(s[l].a,s[r].a);
			ans += down;
			s[l].a -= down;
			s[r].a -= down;
			if(s[l].a == 0) l++;
			if(s[r].a == 0) r--;
			
		}
		
		
	}
	cout << ans;
	
	
	
}
