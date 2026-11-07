#include<bits/stdc++.h>
using namespace std;
int b[200005][30];
int c[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,p,m,j,a,ans=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a;
		j=0;
		while(a){
			b[i][j]=a%2;
			j++;
			a/=2;
		}
	}
	int q=0;
	for(int i=30;i>=0;i--){
		for(int j=0;j<n;j++){
			if(b[j][i]==1 || c[j]==i){
				c[n]++;q++;
			}
			if(q<m){
				for(int j=0;i<n;j++){
					if(c[n]<i) c[n]++;
				}
			}
			if(q>=m){
				p=1;
				for(int j=0;j<=n;j++){
					p*=2;
				}
				ans+=p;
			}
		}
	}
	cout<<ans;
    fclose(stdin);
	fclose(stdout);
	return 0;
}
