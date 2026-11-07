#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,t,cnt,sum,a[100001],b[100001],mx=-1e9,p,y,z;
string s;

char c[300001],cc;
string ej(ll x){
	cnt=0;
	string ss;
	while(x){
		
		ss=char((x%2)+'0')+ss;
		cnt++;
		x/=2;
	}
	return ss;
}
ll sj(string ss){
	cnt=0;
	t=0;
	for(ll i=ss.size()-1;i>=0;i--){
		t+=((int(ss[i]-'0'))*pow(2,cnt++));
	}
	return t;
}
ll yu(ll x,ll y){
	string ans;
	for(ll i=0;i<min(ej(x).size(),ej(y).size());i++){
		if(ej(x)[i]=='1'&&ej(y)[i]=='1'){
			ans+='1';
		}else{
			ans+='0';
		}
	}
	return sj(ans);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	
		
	
	if(m==n){
		for(ll i=1;i<=n;i++){
			p=yu(p,a[i+1]);
		}
		cout<<p;
		return 0;
	}
	if(m==2){
		for(ll i=1;i<=n;i++){
			for(ll j=i+1;j<=n;j++){
				
				mx=max(mx,yu(a[i],a[j]));
			}
		}
		cout<<mx;
		return 0;
	}
	for(ll i=1;i<=n;i++){
		mx=max(mx,a[i]);
	} 
	cout<<mx;
	return 0;
	return 0;
} 
