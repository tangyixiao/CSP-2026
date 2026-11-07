#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
string h[200005];

string ejz(int a){
	string s="";
	while(a>=1){
		if(a%2==1){
			s+='1';
		}else{
			s+='0';
		}
		a/=2;
	}
	string s1="";
	for(int i=s.size()-1;i>=0;--i){
		s1+=s[i];
	}
	return s1;
}
int ksm(int a,int b){
	if(b==0) return 1;
	if(b%2==0) return ksm(a,b>>1)*ksm(a,b>>1);
	else return a*ksm(a,b-1);
}
int sjz(string s){
	int a=0,zs=0;;
	for(int i=s.size()-1;i>=0;--i){
		zs+=(s[i]-'0')*ksm(2,a);
		a++;
	}
	return zs;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;cin >>n>>m;
	int ma=0;
	for(int i=1;i<=n;++i){
		int a;cin >>a;
		h[i]=ejz(a);
		int cd=h[i].size();
		ma=max(ma,cd);
	}
	for(int i=1;i<=n;++i){
		int cd=h[i].size();
		while(cd<ma){
			h[i]="0"+h[i];
			cd++;
		}
	}
	string da="";
	for(int i=0;i<ma;++i){
		int zs=0;
		for(int j=1;j<=n;++j){
			if(h[j][i]=='1'){
				zs++;
			}
		}
		if(zs>=m){
			da+='1';
			for(int j=1;j<=n;++j){
				if(h[j][i]=='0'){
					h[j]="                                              ";
				}
			}
		}else{
			da+='0';
		}
	}
	cout<<sjz(da);
	return 0;
}