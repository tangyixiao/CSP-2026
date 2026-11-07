#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[5005],ans[3005]={0};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int b[5005]={0},pos[3005]={0},l=0;
		for(int j=i;j<=n;j++){
			if(pos[a[j]]==0){
				b[l+1]=a[j];
				pos[a[j]]=l+1;
				l++;
			}
			else{
				for(int k=pos[a[j]];k<=l;k++){
					pos[b[k]]=0;
					b[k]=0;
				}
				l+=pos[a[j]];
				b[l+1]=a[j];
				pos[a[j]]=l+1;
				l++;
			}
		}
		for(int j=1;j<=l;j++){
			ans[b[j]]++;
		}	
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
