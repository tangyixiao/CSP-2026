#include<bits/stdc++.h>
using namespace std;
int main(){
//	freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout);
	int a[200005],b[200005],c[200005][200005];
	int n,m,tot=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a,a+n);
		cout<<a[n-1];
	}else if(m==2){
		for(int i=0;i<n-1;i++){
			int c=a[i];
			for(int j=i+1;j<n;j++){
				int d=a[j];
				b[tot]=(c&d);
				tot++;
			}
		}
		sort(b,b+tot);
		cout<<b[tot-1];
	}else if(m==n){
		int ans=a[0];
		for(int i=1;i<n;i++){
			ans=(ans&a[i]); 
		}
		cout<<ans;
	}else{
		for(int i=0;i<n-1;i++){
			c[0][i]=a[i];
			for(int j=i;j<n;j++){
				c[j][i]=a[j];
			}
		}
		for(int i=0;i<n-1;i++){
			b[tot]=c[1][i];
			for(int j=i+1;j<n;j++){
				b[tot]=(b[tot]&c[j][i]);
				tot++;
			}
		}
		sort(b,b+tot);
		cout<<b[tot-1];
	}
	return 0;
}
