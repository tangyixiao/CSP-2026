#include<bits/stdc++.h>
using namespace std;
int a[300005];
int id[500005];
int ide[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>id[i];
	for(int i=1;i<=n;i++){
		memset(ide,0,sizeof ide);
		int l=i-1;
		
		for(int j=i;j<=n;j++){
			if(ide[id[j]]<=l&&ide[id[j]]>0){
				if(ide[id[j]]==1) l=1;
				else l=ide[id[j]];
			}else{
				ide[id[j]]=l+1;
				l++;
			} 
		}
		
		for(int j=1;j<=m;j++){
			if(ide[j]>0&&ide[j]<=l){
				a[j]++;
			} 
		}
	}
	for(int i=1;i<=m;i++) cout<<a[i]<<' ';
	return 0;
}
