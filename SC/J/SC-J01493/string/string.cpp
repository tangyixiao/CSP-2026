#include<bits/stdc++.h>
using namespace std;

long long n,a,zw,ans;
char c;
string s;

int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a >> c;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	zw=s.size()/2;
	if(s.size()%2){
		for(int i=1;i<=zw;i++){
			if(s[zw-i]!=s[zw+i]){
				ans++;
			}
		}
	}else{
		for(int i=1;i<=zw;i++){
			if(s[zw-i]!=s[zw+i-1]){
				ans++;
			}
		}
	}
	cout << ans;
	return 0;
}