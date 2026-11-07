#include<bits/stdc++.h>
using namespace std;
long long n,a,cnt,ans;
char x;
string s=" ";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i<=n;i++){
		cin >> a >> x;
		for(int j = 1;j<=a;j++){
			s+=x;
			cnt++;
		}
	}
	for(int i = 1;i<=cnt/2;i++){
		if(s[i]!=s[cnt+1-i]) ans++;
	}
	cout << ans;
	return 0;
}
