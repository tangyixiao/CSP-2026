#include<bits/stdc++.h>
using namespace std;
int const N=2e5+10;
int n,m,cnt,a[N],sum,t,r,ans[N],s[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int j=1;j<=n;j++){
		for(int k=1;k<=n;k++){
			s[k]=0;
		}
		for(int k=j;k<=n;k++){
			s[k]=a[k];
			for(int o=1;o<k;o++){
				if(s[o]==s[k]){
					for(int p=o+1;p<=n;p++){
						s[p]=0;
					}
					break;
				}
			}
		}
		for(int k=1;k<=n;k++){
			for(int o=1;o<=m;o++){
				if(s[k]==o) ans[o]++; 
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}