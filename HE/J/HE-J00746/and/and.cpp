#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,t=1,a[100001],b[101],c[101][101],p=1,cnt[10001],mx=-1,q=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		while(a[i]!=0){
			b[t]=a[i]%2;
			a[i]/=2;	
			t++;
		}
		for(int j=t;j>=1;j--){
			c[i][j]=b[j];
		}
		t=1;
	}
	for(int i=1;i<=n;i++){
		for(int o=1;o<=n;o++){
			for(int j=n;j>=1;j--){
				if(c[i][o]==c[i][j]){
					cnt[i]+=2^j;
					cnt[i]+=q;
					q=1;
				}
			}
		}
	}
	for(int i=1;i<=n*n;i++){
		cout<<cnt[i]<<" ";
	}
	cout<<*max_element(cnt+1,cnt+n+1); 
	return 0;
}
