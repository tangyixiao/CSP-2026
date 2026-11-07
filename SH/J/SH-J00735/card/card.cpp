#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m;
int a[N];
int b[N];
int c[N]; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			b[j]=a[j];
			for(int k=i;k<j;k++){
				if(b[k]==b[j]){
					for(int l=k;l<j;l++){
						b[l]=0;
					}
					break;
				}
			}
		}
		for(int j=i;j<=n;j++)c[b[j]]++;
	}
	for(int i=1;i<=m;i++)cout<<c[i]<<" ";
	return 0;
}
