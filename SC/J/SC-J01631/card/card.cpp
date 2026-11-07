#include<bits/stdc++.h>
using namespace std;
int n,m,a[2000010],cnt[2000010];string S;int vis[2000010];
int main(){
	freopen("card.in","r",stdin);freopen("card.out","w",stdout);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		S+=a[i]+'0'; 
	}
	string s;
	for(int i=n;i>=1;i--){
		s=S.substr(i-1);
		for(int j=0;j<=s.size()-1;j++){
			if(vis[s[i]-'0']){
				fill(vis+s[j]-'0',vis+j,0);
				s=s.substr(0,vis[s[i]-'0']-1)+s.substr(j,s.size()-1);
			} 
			vis[s[i]-'0']=j;
		}
		for(int i=0;i<=s.size();i++){
			cnt[s[i]-'0']++;
		}
	}
	for(int i=1;i<=m;i++)cout<<cnt[i]<<" ";
	return 0;
}