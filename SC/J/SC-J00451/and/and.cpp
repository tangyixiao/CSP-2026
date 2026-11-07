#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500010],b[500010],q=0,c[500010];
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	for(int z=0;z<n;z++){
		for(int d=0;d<n;d++){
			b[d]=0;
		}
		for(int i=q;i<n;i++){
			for(int j=q;j<=i;j++){
				if(b[j]==a[i]){
					for(int k=j;k<i;k++){
						b[k]=0;
					}
				}
			}
			b[i]=a[i];
			
		}
		q++;
		for(int p=0;p<n;p++){
			c[b[p]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
}