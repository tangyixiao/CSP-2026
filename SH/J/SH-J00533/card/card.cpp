#include<bits/stdc++.h>
using namespace std;
int a[200005],b[200005];
int ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	if(n>=5000){
		for(int i=1;i<=n;i++){
			ans[a[i]]++;
		}
		for(int i=1;i<=m;i++){
			ans[i]+=ans[i-1];
			cout<<ans[i]<<' ';
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			bool flag=1;
			for(int k=i;k<j;k++){
				if(b[k]==b[j]){
					b[k]=0;
					flag=0;
				}
				if(flag==0){
					b[k]=0;
				}
			}
			flag=1;
		}
		for(int j=i;j<=n;j++){
			ans[b[j]]++;
		}
		for(int j=i;j<=n;j++){
			b[j]=a[j];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
