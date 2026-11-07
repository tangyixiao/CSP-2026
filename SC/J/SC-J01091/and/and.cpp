#include<bits/stdc++.h>
using namespace std;
long long a[200005],n,m,ans=0,mx=-1;
bool vis[25];
string er(long long a){
	string s="";
	while(a>0){
		if(a%2!=0){
			s="1"+s;
		}
		else{
			s="0"+s;
		}
		a/=2;
	}
	return s;
}
long long yu(long long a,long long b){
	string s="",sa=er(a),sb=er(b);
	long long len=min(sa.size(),sb.size()),aa=sa.size(),bb=sb.size();
	for(int i=1;i<=len;i++){
		//cout<<sa[aa-i]<<" "<<sb[bb-i]<<endl;
		if(sa[aa-i]-'0'&&sb[bb-i]-'0'){
			s="1"+s;
		}
		else{
			s="0"+s;
		}
	}
	long long ans=0,num=1;
	for(int i=1;i<=len;i++){
		if(s[len-i]-'0'){
			ans+=num;
		}
		num*=2;
	}
	return ans;
}
void dfs(long long x,long long cnt){
	if(x==m){
		ans=max(ans,cnt);
		//cout<<"***"<<cnt<<endl;
		return;
	}
	if(x==0){
		for(int i=1;i<=n;i++){
			vis[i]=true;
			dfs(1,a[i]);
			vis[i]=false;
		}
	}
	else{
		for(int i=1;i<=n;i++){
			if(!vis[i]){
				vis[i]=true;
			//	if(a[i]==12) cout<<"######"<<endl;
				dfs(x+1,yu(cnt,a[i]));
				vis[i]=false;
			}
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(mx,a[i]);
	}
	if(m==1){
		cout<<mx;
		return 0;
	}
	if(m==n){
		long long ans=a[1];
		for(int i=2;i<=n;i++){
			ans=yu(ans,a[i]);
		}
		cout<<ans;
		return 0;
	}
	if(n<=2000){
		dfs(0,0);
		cout<<ans;
		return 0;
	}
	cout<<mx;
	return 0;
}
/*
4 2
3 15 12 12

样例345
*/