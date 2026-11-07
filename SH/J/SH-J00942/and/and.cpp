#include<bits/stdc++.h>
using namespace std;
int a[200005];
int mx=-1e9;
int m,n;
string ch(int y){
	vector<int> b;
	while (y!=0){
		b.push_back(y%2);
		y/=2;
	}
	string s="";
	for (int i=b.size()-1;i>=0;i--){
		s+=(b[i]+'0');
	}
	return s;
}
int z(int t,int q){
	string e=ch(t);
	string o=ch(q);
	string h="";
	for (int i=0;i<min((int)e.length(),(int)o.length());i++){
		h+=((e[i]-'0')&&(o[i]-'0'))+'0';
	}
	int cnt=1,er=0;
	for (int i=h.length()-1;i>=0;i--){
		er+=(h[i]-'0')*cnt;
		cnt*=2;
	}
	return er;
}
void f(int x,int v,int now){
	if (x>=m){
		mx=max(v,mx);
		return;
	}
	if (v==0){
		return;
	}
	if (now>n){
		return;
	}
	for (int i=now+1;i<=n;i++){
		if (x==0){
			f(x+1,a[i],i);
		}
		else
			f(x+1,z(a[i],v),i);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	f(0,1,0);
	cout<<mx;
	return 0;
}
