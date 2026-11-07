#include<bits/stdc++.h>
using namespace std;
long long n,m,a[100086],c[100860],d[100086],e[100860],w;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	w=0;
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	for(long long h=1;h<=n;h++){
		for(long long i=h;i+1<=n;i++){
			w++;
			c[w]=a[i];
			if(e[a[i]]!=0){
				for(long long j=i;j>=1;j--){
					if(c[j]!=a[i]||j==i){
						e[c[j]]--;
						c[j]=0;
						w--;
					}
					else{
						break;
					}
				}
			}
			else{
				e[a[i]]++;
			}
	}
	d[a[n]]++;
	for(long long i=1;i<=m;i++){
		d[c[i]]++;
		c[i]=0;
	}
	w=0;
	}
	for(long long i=1;i<=m;i++){
		cout<<d[i]<<' ';
	}
}
