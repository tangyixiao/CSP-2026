#include<bits/stdc++.h>
using namespace std;
int n,m;
string a[200010];
long long ans,pw[50],mx=-1e17,u;
void dfs(int v,int bs,string s){//节点,步数 
	if(v == n&& bs!=m){
		return;
	}
	if(v == n && bs == m){
		long long kk=0;
		bool f = 1;
		string ss="";
		for(int i = 0;i < s.size();i++){
			if(s[i] == '1'){
				if(f){
					ss = a[i+1];
					f = 0;
					continue;
				}
				for(int j = 0;j < a[i+1].size();i++){
					if(ss[j] != a[i+1][j] || ss[j]=='0' || a[i+1][j]=='0'){
						ss[j]='0';
					}
				}
			}
		}
		for(int j = 0;j < s.size();j++){
			if(ss[j] == '1'){
				kk += pw[j+1];
			}
		}
		ans = max(kk,ans);
		return;
	}
	if(bs==0){
		dfs(v+1,bs,s+'0');
	}else{
		dfs(v+1,bs-1,s+'1');
		dfs(v+1,bs,s+'0');
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.in","w",stdout);
	pw[1] = 1;
	for(int i = 2;i <= 40;i++){
		pw[i]=pw[i-1]*2;
	}
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> u;
		mx = max(mx,u);
		while(u > 0){
			a[i]+=((u%2) + '0');
			u/=2;
		}
	}
	if(m == 1){
		cout<<mx;
		return 0;
	}
	dfs(0,m,"");
	cout<<ans;
	return 0;
} 

/*

*/ 