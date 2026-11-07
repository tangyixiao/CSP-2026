#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int a[200005],vis[55],ans;
string s[200005];
vector<string>v;
vector<string>v2;
int qpow(int a,int b){
	int res=1;
	while(b>0){
		if(b%2==1){
			res*=a;
			b--;
		}else{
			a*=a;
			b/=2;
		}
	}
	return res;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int aa=a[i],ji=1;
		while(aa){
			s[i]+=aa%2+'0';
			aa/=2;
			ji++;
		}
		if(ji<32){
			while(ji<32){
				ji++;
				s[i]+='0';
			}
		}
		reverse(s[i].begin(),s[i].end());
		v.push_back(s[i]);
	} 
	//0~30位 
	int u=0,cnt=0; 
	while(u<=30){
		v2.clear();cnt=0;
		for(string c:v){
			if(c[u]=='1'){
				cnt++;
				v2.push_back(c);
			}
		}
		if(cnt<m)u++;
		else{
			v=v2;
			vis[u]=1;
			u++;
		}
	}
	for(int i=30;i>=0;i--){
		if(vis[i]==1)ans+=qpow(2,30-i);
	}
	cout<<ans;
	return 0;
}