#include<bits/stdc++.h>
using namespace std;
const int N=200010;
int n;
int a[N];
char c[N];
void input(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	return;
}
bool checkBF(){
	return n*(*max_element(a+1,a+1+n))<=1e8;
}
void solveBF(){
	string s;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=a[i];j++)
			s+=c[i];
	long long len=s.size(),cnt=0;
	for(int i=0;i<=len/2;i++)
		if(s[i]!=s[len-i-1]) cnt++;
	cout<<cnt<<'\n';
	return;
}
void solve(){
	int l=1,r=n;
	long long cnt=0;
	while(l<=r){
		int x=min(a[l],a[r]);
		if(c[l]!=c[r]){
			cnt+=x;
		}
		if(a[l]<=a[r]) l++,a[r]-=x;
		else r--,a[l]-=x;
	}
	cout<<cnt<<'\n';
	return;
}
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	input();
	if(checkBF) solve();
	else solve();
	return 0;
}
