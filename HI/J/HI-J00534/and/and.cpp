#include<bits/stdc++.h>
using namespace std;
const int M=1e5+10;
int l,r;
int d[M];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,k;cin>>n>>k;
	if(n==k){
		
	}
	int a[n+10];
	int b[M];
	int c[M];
	string s;
	int cut=0;
	int ans=0;
	int w=0;
	for(int i=1;i<=n;i++) 
	cin>>a[i];
	for(int i=1;i<n;i++){
		l=0;r=0;
		ans=0;
		w=0;
		int o=a[i];
		int p=a[i+1];
		while(o!=0){
			l++;
			b[l]=o%2;
			o/=2;
		}
		while(p!=0){
			r++;
			c[r]=p%2;
			p/=2;
		}
		int m=min(l,r);
		int z=max(l,r);
		for(int j=m;j>=1;j--){
			if(b[j]==c[j] && b[j]==1 && c[j]==1){
				d[j]=1;
			}
			else{
				d[j]=0;
			}
		}
		for(int x=z;x>=1;x--){
			int q=pow(2,w);
			ans=ans+d[x]*q;
			w++;
		}
		for(int j=1;j<=M;j++) d[j]=0;
		cut=max(cut,ans);
	}
	cout<<cut;
	return 0;
}  
