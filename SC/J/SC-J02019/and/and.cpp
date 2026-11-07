#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,siz=LONG_LONG_MIN;
string temp="";
string er[40][300000];
int a[40];
void do_2(int n){
	string a="";
	temp="";
	while(n){
		a+=(n%2)+'0';
		n/=2;
	}for(int i=a.size()-1;i>=0;i--) temp+=a[i];
	siz=max(siz,(int)temp.size());
}bool cmp(string a,string b){
	for(int i=0;i<a.size();i++)
		if(a[i]!=b[i])
			return a[i]>b[i];
}string and_(string a,string b){
	for(int i=0;i<a.size();i++) if(a[i]!=b[i]) a[i]='0';
	return a;
}string ma(string a,string b){
	if(a.size()>b.size()) return a;
	else if(a.size()<b.size()) return b;
	if(a>b) return a;
	else return b;
}signed main(){ 
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);//Not dp!Thats good.
	ios::sync_with_stdio(0);
	cin.tie(),cout.tie();
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int k;
		cin>>k;
		do_2(k);
		er[temp.size()][++a[temp.size()]]=temp;
	}for(int i=1;i<=siz;i++) sort(er[i]+1,er[i]+1+a[i],cmp);
	string ans="0";
	for(int i=1;i<=siz;i++){
		if(a[i]<=1) continue;
		for(int j=1;j<=a[i]&&j<=m;j++)
			ans=ma(ans,and_(er[i][1],er[i][2]));
	}
	int num=0,k=1;
	for(int i=ans.size()-1;i>=0;i--){
		if(ans[i]=='1') num+=k;
		k*=2;
	}cout<<num;//yellow or green?
	return 0;
} 