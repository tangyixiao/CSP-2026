#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ull unsigned long long
#define pii pair<int,int>
//#define popcnt __builtin_popcount
//#define ls (rt<<1)
//#define rs (rt<<1|1) 
string c,s,cc,ss;
void solve(){
	cin>>c>>s>>cc>>ss;
	if(c==cc)cout<<1;
	else{
		cout<<"0000\n";
		return;	
	}
	string ns="";
	string nss="";
	for(int i=0;i<2;i++)ns+=s[i],nss+=ss[i];
//	int u=stoi(ns);
//	int v=stoi(s);
	if(nss==ns)cout<<1;
	else{
		cout<<"000\n";
		return;
	}
	if(((s[2]>='A')&&(s[2]<='C')&&(ss[2]>='A'&&ss[2]<='C'))||((s[2]>='D')&&(s[2]<='F')&&(ss[2]>='D'&&ss[2]<='F'))){
		cout<<1;
	}else{
		cout<<"00\n";
		return;
	}
	if(((s[2]>='A')&&(s[2]<='C')&&(ss[2]>='A'&&ss[2]<='C'))&&(abs(ss[2]-s[2])==1)){
		cout<<1; 
	}else if((ss[2]=='D'&&s[2]=='F')&&(s[2]=='D'&&ss[2]=='F')){
		cout<<1;
	}else cout<<0;
} 
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("travel3.in","r",stdin);
	freopen("travel.out","w",stdout);
	int T=1;
	//cin>>T;
	while(T--)solve();
	return 0;
}
