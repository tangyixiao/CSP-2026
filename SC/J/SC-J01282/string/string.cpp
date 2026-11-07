#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+5;


int a[N];
char c[N];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int L=0,lca=0;
	if(n==1){
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		if(!lca) lca=a[i];
		lca=__gcd(lca,a[i]);
	}
	s=' '+s;
	for(int i=1;i<=n;i++){
		a[i]/=lca;
		
		string ss(a[i],c[i]);
		s+=ss;
	}
	
	L=s.size();
	
	ll cnt=0;
	for(int i=1;i<=L/2;i++)
		if(s[i]!=s[L-i]) cnt++;
	
	cout<<cnt*lca;
	
	
	return 0;
}
