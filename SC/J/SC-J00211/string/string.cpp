#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int a,f=1;
char c;
char q;
int n;
string s="@";
void mm(int x){
	for(int i=1;i<=x;i++)s=s+c;
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	if(n==1){cout<<0;return 0;}
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		mm(a);
		if(q!=c&&i!=1)f=0;
		q=c;
	}
	if(f==1){cout<<0;return 0;}
	int ans=0;
	int l=s.size();
	for(int i=1;i<=l/2+l%2;i++){
		if(s[i]!=s[l-i])ans++;
	}
	cout<<ans;
	return 0;
}
