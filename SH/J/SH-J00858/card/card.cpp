#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],s[300005],ans[300005];
int main(){
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];	
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) s[j]=0;
		for(int j=i;j<=n;j++){
			s[a[j]]++;
			if(s[a[j]]>1){
				for(int j=1;j<=m;j++) s[j]=0;
			}
		}
		for(int j=1;j<=m;j++){
			ans[a[j]]+=s[a[j]];
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
} 
