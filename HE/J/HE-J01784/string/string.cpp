#include<bits/stdc++.h>
using namespace std;
const int maxn=200005;
int n;
int a[maxn];
char c[maxn];
int cnt;
string s;
int k;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
		cin>>c[i];
		for(int j=1;j<=a[i];j++) {
			s[cnt]=c[i];
			cnt++;
		}
	}
	for(int i=0;i<cnt;i++) {
		if (s[i]==s[cnt-1-i]) {
			k++;
		}
	}
	if (cnt%2==0) {
		k=k/2;
		cout<<(cnt-k*2)/2;
	}else {
		k=k/2+1; 
		cout<<(cnt-(k-1)*2-1)/2;
	}
	return 0;
}
