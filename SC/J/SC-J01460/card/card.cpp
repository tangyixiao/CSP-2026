#include<bits/stdc++.h>
using namespace std;
int t[500010],ans[500010];
int co[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,p[500010];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>p[i];
	}
	for(int i=1;i<=n;i++){
		int k=0;
		for(int j=1;j<=m;j++){
			t[j]=0;
			ans[j]=0;
		}
		for(int j=i;j<=n;j++){
			if(t[p[j]]==0||t[p[j]]>k){
				k++;
				t[p[j]]=k;
				ans[k]=p[j];
			}
			else{
				k=t[p[j]];
				ans[k]=p[j];
				
			}
		}
		for(int j=1;j<=k;j++){
			co[ans[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<co[i]<<" ";
	}
	return 0;
}