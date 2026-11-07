#include<bits/stdc++.h>
using namespace std;
const int MAXN=500005;
int a[MAXN],x[MAXN],ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++){
		int l=0;
		for(int j=0;j<=n;j++)
			x[j]=0;
		for(int j=i;j<=n;j++){
			for(int k=0;k<l;k++){
				if(x[k]==a[j]){
					for(int h=k;h<l;h++){
						x[h]=0;
					}
					l=k;
				}
			}
			x[l]=a[j];
			l++;
		}
		for(int j=0;j<=l;j++)
			ans[x[j]]++;
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<" "; 
	cout<<endl;
	return 0;
} 
