#include <bits/stdc++.h>
using namespace std; 
const int N=1e7+1;
long long n,m,a[N],b[N],c[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int v=1;
		for(int j=i;j<=n;j++){
			int f=1;
			for(int i1=1;i1<=v;i1++){
				if(c[i1]==a[j]){
					v=i1+1;
					f=0;
					c[i1]=a[j];
					break;
				}
			}
			if(f)c[v]=a[j],v++;
		}
		for(int i=1;i<v;i++){
			b[c[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
