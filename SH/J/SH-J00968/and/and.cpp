//T3 ±©Á¦ 0/20 
#include <bits/stdc++.h>
using namespace std;
int n,m,a[100010],ans;
string to_bin(int x){
	vector<int> bin;
	while(x) bin.push_back(x%2),x/=2;
	string s;
	for(int i=0;i<bin.size();i++) s=char(bin[i]+'0')+s;
	return s;
}
void fill_0(string &s,int exp){
	for(int i=s.size();i<exp;i++) s='0'+s;
}
int cal(int a,int b){
	string s=to_bin(a);
	string t=to_bin(a);
	if(s.size()>t.size()) fill_0(t,s.size());
	else if(s.size()<t.size()) fill_0(s,t.size());
	string u;
	for(int i=0;i<s.size();i++){
		if(s[i]=='1'&&t[i]=='1') u[i]+='1';
		else u[i]+='0';
	}
	int ret=0;
	for(int i=0;i<u.size();i++) ret+=int(u[i]-'0')*pow(2,u.size()-i-1);
	return ret;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}
	else if(m==n){
		for(int i=1;i<n;i++) ans=cal(a[i],a[i+1]);
		cout<<ans;
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			ans=max(ans,cal(a[i],a[j]));
		}
	}
	cout<<ans;
	return 0;
}
