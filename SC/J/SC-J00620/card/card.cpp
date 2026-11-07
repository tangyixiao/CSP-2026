#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,t[n+1];
	cin>>n>>m;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		t[i]=0;
	}
	for(int i=1;i<=n;i++){
		vector<int> p(n-i+2);
		for(int j=i;j<=n;j++){//fnx
			for(int o=1;o<j;o++){
				if(p[o]==a[j]){
					for(int oo=o;oo<j;oo++)p[oo]=-1;
					break;
				}
			}
			p.push_back(a[j]);
		}
		for(int k=1;k<=m;k++){
			for(int j=1;j<n-i+2;j++){
				if(p[j]==k){
					t[k]=t[k]+1;
					break;
				}
				//break;
			}
		}
	}
	for(int i=1;i<=m;i++)cout<<t[i]<<' '; 
	return 0;
}