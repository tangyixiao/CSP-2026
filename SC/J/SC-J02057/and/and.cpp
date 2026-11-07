#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,flag,wa;
string s[200005],ans;
bool vis[200005];
string f(int x){
	string ret="";
	int cnt=1;
	while(cnt<=x){
		cnt*=2;
	}
	cnt/=2;
	while(cnt>0){
		if(x>=cnt){
			ret+="1";
			x-=cnt;
		}else{
			ret+="0";
		}
		cnt/=2;
	}
	return ret;
}
string bl(string x,int cnt){
	for(int i=1;i<=cnt;i++){
		x="0"+x;
	}
	return x;
}
int ff(string x){
	int cnt=1,ret=0;
	for(int i=x.size()-1;i>=0;i--){
		ret+=cnt*(x[i]-'0');
		cnt*=2;
	}
	return ret;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		s[i]=f(x);
		int o=s[i].size();
		flag=max(flag,o);
	}
	for(int i=1;i<=n;i++){
		s[i]=bl(s[i],flag-s[i].size());
	}
	for(int i=0;i<flag;i++){
		int num=0;
		for(int j=1;j<=n;j++){
			if(s[j][i]=='1'&&vis[j]==0){
				num++;
			}
		}
		if(num<m){
			ans+="0";
		}else{
			ans+="1";
			for(int j=1;j<=n;j++){
				if(s[j][i]=='0'){
					vis[j]=1;
					wa++;
				}
			}
		}
	}
	cout<<ff(ans);
	return 0;
}
