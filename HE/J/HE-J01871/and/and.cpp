#include<bits/stdc++.h>
using namespace std;
long long a[10000000],c[1000000],b[1000000];
int main (){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,p=1,d;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	for(int i=1;i<=n;i++){
		p=1;
		while(p){
			if(b[i]%2!=0){
				c[i]++;
				b[i]/=2;
				if(b[i]==0){
					p=0;
				}
			}else{
				b[i]/=2;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(c[i]>c[j]){
				swap(c[i],c[j]);
				swap(a[i],a[j]);
			}
		}
	}
	cout<<a[n-m+1];
	return 0;
}
