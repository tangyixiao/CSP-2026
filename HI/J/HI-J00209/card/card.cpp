#include<bits/stdc++.h>
using namespace std;
int n,m;
int g[500005],zm[500][500005],a[500005];
void s1(int x){
	int t[m+5]={0};
	g[x]=1;
	for(int i=x;i<=n;i++){
		if(i==x){
			zm[x][g[x]]=a[i];
			t[a[i]]++;
			g[x]++;
		}
		else{
			if(t[a[i]]==1){
				for(int j=1;j<=g[x];j++){
					if(zm[x][j]==a[i]){
						for(int k=j+1;k<i;k++){
							zm[x][k]=0;
						}
						g[x]=j+1;
					}
				}
			}
			else{
				zm[x][g[x]]=a[i];
				g[x]++;
			}
			if(t[a[i]]==0)t[a[i]]++;
		}	
	}
}
int main(){
    freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		s1(i);g[i]--;
	}
	int h[m+1]={0};
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			for(int k= 1;k<=g[i];k++){
				if(zm[i][k]==j)h[j]++;
			}
	    }
	}
	for(int i=1;i<=m;i++)cout<<h[i];
	return 0;
}

