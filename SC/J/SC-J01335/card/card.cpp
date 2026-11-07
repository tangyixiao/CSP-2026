#include<bits/stdc++.h>
using namespace std;
int n,m,a[50000005],t[50000005],ans[50000555];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int z=1;z<=n;z++){
		string s="";
		memset(t,0,sizeof(t));
		for(int i=z;i<=n;i++){
			if(t[a[i]]==0){
				t[a[i]]=1;
				s+=a[i]+'0';
			}else{ 
				string b=""; 
				int cnt=0;
				for(int j=0;j<s.size();j++){
					if(s[j]-'0'==a[i]){
						cnt=j;
					}
				}
				b=s.substr(0,cnt+1);
				s=b;
				memset(t,0,sizeof(t));
				for(int j=0;j<s.size();j++){
					t[s[j]-'0']=1;
				}
			} 
		}
		for(int i=1;i<=m;i++){
			if(t[i]==1){
				ans[i]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
} 