#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define int128 __int128
#define gc getchar()
#define MAX_TIME 0.98
using namespace std;
const int N=2e5+10;
int rd(){
	int x=0,f=1;char c=gc;
	for(;!isdigit(c);c=gc)if(c=='-')f=-1;
	for(;isdigit(c);x=x*10+c-'0',c=gc);
	return x*f;
}
int n,m;
ll a[N];
string base[N];
bool cmp(string s1,string s2){return s1>s2;}
ll ksm(int a,int k){
	ll res=1;
	while(k){
		if(k&1)res*=a;
		k>>=1,a*=a;
	}
	return res;
}
vector<ll>vt;ll ans=LLONG_MIN;
void dfs(int now){
	if(vt.size()>=m){
		ll res=vt[0];
		for(int i=1;i<m;i++)res&=vt[i];
		ans=max(ans,res);
		return;
	}
	if(now>n)return;
	for(int i=now;i<=n;i++){
		vt.push_back(a[i]);dfs(i+1);vt.pop_back();
	}
}
void solve1(){dfs(1);cout<<ans<<"\n";}
void solve2(){
	for(int i=1;i<=n;i++){
		ll tmp=a[i];string base2="";
		while(tmp){
			int r=tmp%2;
			if(r==1)base2='1'+base2;
			else base2='0'+base2;
			tmp>>=1;
		}
		while(base2.size()!=31)base2='0'+base2;
		base[i]=base2;
	}
	sort(base+1,base+1+n,cmp);
	string ans="";
	for(int i=0;i<31;i++){
		int cnt=0;
		for(int j=1;j<=m;j++)if(base[j][i]=='1')cnt++;
		if(cnt==m)ans+='1';
		else ans+='0';
	}
//	cout<<ans<<"\n";
	ll res=0;int k=30;
	for(int i=0;i<31;i++){
		if(ans[i]=='1')res+=ksm(2,k);
		k--;
	}
	cout<<res<<"\n";
}
bool cmpll(ll x,ll y){return x>y;}
void solve3(){sort(a+1,a+1+n,cmpll);cout<<a[1]<<endl;}
void solve4(){
	ll ans=a[1];
	for(int i=2;i<=n;i++)ans&=a[i];
	cout<<ans<<"\n";
}
void solve5(){
	for(int i=1;i<=n;i++){
		ll tmp=a[i];string base2="";
		while(tmp){
			int r=tmp%2;
			if(r==1)base2='1'+base2;
			else base2='0'+base2;
			tmp>>=1;
		}
		while(base2.size()!=31)base2='0'+base2;
		base[i]=base2;
	}
	sort(base+1,base+1+n,cmp);
	string fans="0000000000000000000000000000000";
	for(int k=1;k<=n-m+1;k++){
		string ans="";
		for(int i=0;i<31;i++){
			int cnt=0;
			for(int j=0;j<m;j++)if(base[k+j][i]=='1')cnt++;
			if(cnt==m)ans+='1';
			else ans+='0';
		}
		if(fans<ans)fans=ans;
	}
	ll res=0;int k=30;
	for(int i=0;i<31;i++){
		if(fans[i]=='1')res+=ksm(2,k);
		k--;
	}
	cout<<res<<"\n";
}
void solve6(){
	for(int i=1;i<=n;i++){
		ll tmp=a[i];string base2="";
		while(tmp){
			int r=tmp%2;
			if(r==1)base2='1'+base2;
			else base2='0'+base2;
			tmp>>=1;
		}
		while(base2.size()!=31)base2='0'+base2;
		base[i]=base2;
	}
	sort(base+1,base+1+n,cmp);
	string fans="0000000000000000000000000000000";
	for(int k=1;k<=n-m+1;k++){
		string ans="";
		for(int i=0;i<31;i++){
			int cnt=0;
			for(int j=0;j<m;j++)if(base[k+j][i]=='1')cnt++;
			if(cnt==m)ans+='1';
			else ans+='0';
		}
		if(fans<ans)fans=ans;
		if((double)clock()/CLOCKS_PER_SEC>MAX_TIME){
			ll res=0;int k=30;
			for(int i=0;i<31;i++){
				if(fans[i]=='1')res+=ksm(2,k);
				k--;
			}
			cout<<res<<"\n";
			exit(0);
		}
	}
	ll res=0;int k=30;
	for(int i=0;i<31;i++){
		if(fans[i]=='1')res+=ksm(2,k);
		k--;
	}
	cout<<res<<"\n";
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	n=rd(),m=rd();
	for(int i=1;i<=n;i++)a[i]=rd();
	bool ch=1;
	for(int i=1;i<=n;i++)if(a[i]!=i-1){ch=0;break;}
	if(n<=100){solve1();return 0;}
	else if(m==1){solve3();return 0;}
	else if(m==n){solve4();return 0;}
	else if(m==2){solve5();return 0;}
	else if(ch){solve2();return 0;}
	else solve6();
	return 0;
}
