#include <bits/stdc++.h>
using namespace std;
int res[300010];
int vis[300010];
int a[500010];
int findn(char a,string s){
	for(int i=0;i<s.size();i++){
		if (s[i]==a) return i;
	}
	return -1;
}
int main(){
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) vis[i]=1;
		string s="",s1="";
		for(int j=i;j<=n;j++){
			if (findn(a[j]+'0',s)!=-1){
				for(int k=0;k<=findn(a[j]+'0',s);k++){
					s1=s1+s[k];
				}
				s=s1;
				continue;
			}
			char tmp=a[j];
			s=s+tmp;
		}
		for(int j=0;j<s.size();j++){
			if (vis[s[j]-'0']==1){
				vis[s[j]-'0']=0;
				res[s[j]-'0']++;
			}
		}
	}
	for(int i=1;i<m;i++){
		cout<<res[i]<<' ';
	}
	cout<<res[m];
	
	return 0;
}
