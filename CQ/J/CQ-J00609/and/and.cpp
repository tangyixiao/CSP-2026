#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],b[200005],k1=0,k2=0,c[200005],d[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		c[i]=a[i];
	}
	for(int i=1;i<=n;i++){
		while(1){
			if(a[i]>=2){
				k2++;
				if(a[i]%2==1){
					k1++;
				}
				a[i]=a[i]/2;
			}else{
				break;
			}
		}
		b[i]=k1+1;
		d[i]=k2+1;
		k1=0;
		k2=0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(b[i]>=b[j]&&d[i]>=d[j]){
				swap(b[i],b[j]);
				swap(d[i],d[j]);
				swap(c[i],c[j]);
			}else{
				continue;
			}
		}
	}
	cout<<c[m]<<endl;
	return 0;
}
