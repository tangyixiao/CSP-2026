#include<bits/stdc++.h>
using namespace std;
int n,a,ans = 1;
char c[30];
string q,p,m;
int main(){
	freopen("string,in","r",stdin);
	freopen("string,out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a>>c[i];
		for(int j =1;j<= a;j++)
			q += c[i];
	}
	for(int i = 0;i < q.size()/2;i++){
		p += q[i];
	}
	for(int i = q.size();i>=q.size()/2+1;i--)
		m += q[i];
	for(int i = 1;i<=p.size();i++){
		if(p[i] == m[i])
			ans++;
	}
	if(ans == p.size())
		cout<<0;
	else
		cout<<2;
	return 0;
}
