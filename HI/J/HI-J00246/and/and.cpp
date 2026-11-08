#include<bits/stdc++.h>
using namespace std;
int n,m;
string s[200005];
bool cmp(string x,string y){
	if(x.size()!=y.size())return x.size()>y.size();
	int cnt=0,si=x.size();
	while(cnt<si){
		if(x[cnt]>y[cnt])return 1;
		else if(x[cnt]>y[cnt])return 0;
		cnt++;
	}
	return 1;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	long long c,d=0;
	for(int i=1;i<=n;i++){
		cin>>s[i];
		c=s[i].size();
		d=max(d,c);
	}
	sort(s+1,s+n+1,cmp);
	cout<<s[1];
	return 0;
}
