#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);freopen("card.out","w",stdout);
	cin.tie(0),cout.tie(0);
	int n,m;
	cin>>n>>m;
	int a[n+5];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}int sum[m+5]={};
	int b[n+5];
	int c[n+5];
	for(int i=1;i<=n;i++){
		memset(c,-1,sizeof c);
		for(int j=i;j<=n;j++){
			for(int k=i;k<=n;k++){
				if(c[j]==a[k]){
					for(int l=j;l<=n;l++){
						c[l]=-1;
					}
				}
			}for(int k=j;k<=n;k++){
				if(c[k]==-1)c[k]=a[j];
			}
		}for(int j=i;j<=n;j++){
			sum[c[j]]++;
		}//for(int j=i;j<=n;j++)cout<<c[j]<<' ';
		//cout<<'\n';
	}for(int i=1;i<=m;i++)cout<<sum[i]<<' ';
	fclose(stdin);fclose(stdout);
	return 0;
}
