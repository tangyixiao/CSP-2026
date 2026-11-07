#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m,a[N],an[N],v[N],mo[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			mo[j-i+1]=a[j];
			for(int k=1;k<=j-i+1;k++){
				if(mo[k]==a[j]){
					for(int u=k;u<j-i+1;u++){
						mo[u]=-1;
					}
				}
			}
		}
		for(int e=1;e<=m;e++){
			v[e]=0;
		}
		for(int j=i;j<=n;j++){
			for(int e=1;e<=m;e++){
				if(mo[j-i+1]==e&&v[e]==0){
					an[e]++;v[e]=-1;
				}
			}
			
		}
	}
	for(int i=1;i<=m;i++)cout<<an[i]<<" ";
	return 0;
} 
