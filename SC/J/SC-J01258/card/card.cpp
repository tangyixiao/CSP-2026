#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+55;
int a[N],b[N],c[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	int n,m,p=0;
	cin>>n>>m;
	int t=m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	while(m--){
		for(int i=0;i<=n;i++)
			b[i]=0;
	for(int i=1;i<=n;i++)
		for(int j=i;j<=n;j++){
			bool f=0;
			int ta;
			for(int k=1;k<=p;k++)
				if(a[j]==a[k]){
					f=1,ta=k;
					break;
				}
			if(f){
				for(int i=ta;i<=n;i++)
					b[i]=0,p--;
				b[p+1]=a[j];
				p++;
			}
			else
				b[p+1]=a[j],p++;
		}
	sort(b+1,b+n+1);
	for(int i=1;i<=n;i++)
		if(b[i]>b[i-1])
			c[b[i]]++;
}
	for(int i=1;i<=t;i++)
		cout<<c[i]<<" ";
	return 0;
}