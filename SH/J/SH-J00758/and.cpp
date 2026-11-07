#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","W",stdout);
	int n,m,x,y,o,h,c=1,abs=0,sum=0;
	long a[200000];
	string e[10000],f[10000],g[10000];
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=n;i++){
		for(int l=1;l<=n;l++){
			o=a[i];
			e[l]=o%2;
			o/=2;
		}
		for(int j=i+1;j<=n;j++){
			for(int t=1;t<=n;t++){
				h=a[j];
				f[t]=h%2;
				h/=2;
			}
			for(int l=1;l<=31;l++){
				if(e[i]==1 && f[i]==1){
					g[i]=1;
				}
			}
			for(int l=1;l<=31;l++){
				g[i]*=c;
				c*=2;
				ans+=z[i];
			} 
		}
		if(ans>=sum) sum=ans;
	}
	cout << sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
