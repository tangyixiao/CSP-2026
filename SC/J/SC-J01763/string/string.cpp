#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n,ans=0,bs;
string s[200005],a;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;
	string d,e;
	for(int i=0;i<n;i++){
		cin>>bs>>s[i];
		for(int j=0;j<bs;j++){
			a+=s[i];
		}
	}
	e=a;
	cout<<e<<endl;
	int q=e.size()-1;
	for(int i=0;i<q;i++){
		d[i]=e[q-i];
	}
	for(int i=0;i<q;i++){
		if(d[i]!=e[i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}