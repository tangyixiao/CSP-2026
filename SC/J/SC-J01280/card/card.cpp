#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],s[500010],d[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++){
		int jj=0;
		for(int j=i;j<n;j++){
			s[jj]=a[j];
			for(int o=0;o<jj;o++){
				if(s[o]==a[j]){
					jj=o;
					break;
				}
			}jj++;
		}for(int j=0;j<jj;j++)
			d[s[j]]++;
	}for(int i=1;i<=m;i++)cout<<d[i]<<" ";
	return 0;
}