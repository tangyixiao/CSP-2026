#include<bits/stdc++.h>
using namespace std;
const int N=2e5+15;
int n,m,maxx,x=pow(2,31)-1;
int f[N],a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	f[0]=x;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		x&=a[i];
		maxx=max(maxx,a[i]);
	}
	if(m==1) cout<<maxx;
	else if(m==n) cout<<x;
	else{
		for(int i=1;i<=n;i++){
			for(int j=min(i,m);j>=1;j--){
				//for(int k=1;k<=j;k++){
					f[j]=max(f[j],f[j-1]&a[i]);
				//}
				
			}
		}
		cout<<f[m];
	}
	return 0;
}
