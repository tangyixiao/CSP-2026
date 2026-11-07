#include<bits/stdc++.h>
using namespace std;
const int N=200010;
int n,m,x,y,tot,len;
long long ans,dep[40];
string s[N];
bool st[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>x;
		y=x;
		tot=0;
		while(y){
			s[i]+=char(y%2+'0');
			y/=2;
			tot++;
		}
		len=max(tot,len);
	}
	for(int i=1;i<=n;i++){
		int l=s[i].size();
		for(int j=l;j<len;j++)s[i]+="0";
	}
	dep[0]=1;
	for(int i=1;i<=len;i++)dep[i]=dep[i-1]*2;
	for(int i=len-1;i>=0;i--){
		int sum=0;
		for(int j=1;j<=n;j++){
			if(!st[j]&&s[j][i]=='1')sum++;
		}
		if(sum>=m){
			for(int j=1;j<=n;j++){
				if(!st[j]&&s[j][i]=='0')st[j]=1;
			}
			ans+=dep[i];
		}
	}
	cout<<ans;
	return 0;
}
/*
4 2
3 15 12 12
*/