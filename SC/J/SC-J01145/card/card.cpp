#include<bits/stdc++.h>
using namespace std;
int a[5000];
int b[5000][5000]={0};
int c[5000]={0};
int x[5000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<n;i++){
		int cnt=i;
		int cnt2=i;
		int j=i;
		for(j=i;i<=n;j++){
			b[i][j]=a[cnt];
			cnt2++;
			for(int k=i;k<=j;k++){
				if(b[i][k]==b[i][j]){
					j=k+1;
					break;
				}
			}cnt++;
			if(cnt2>n){
				break;
			}
		}x[i]=j;
	}for(int i=1;i<=m;i++){
		int y=0;
		for(int j=1;j<=n;j++){
			for(int k=1;k<=x[j];k++){
				if(b[j][k]==i){
					y++;
					break;
				}
			}
		}cout<<y<<" ";
	}return 0;
}