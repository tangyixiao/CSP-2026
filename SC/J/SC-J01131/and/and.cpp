#include <bits/stdc++.h>
using namespace std;
int s[200005],a[200005],ma,m,k,n;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>s[i];
		ma=max(ma,s[i]);
		if(i==1){
			k=s[i];
		}
		else{
			k=(k & s[i]);
		}
	}
	if(m==1){
		cout<<ma;
	}
	else if(m==n){
		cout<<k;
	}
	else if(m==2){
		ma=0;
		k=0;
		for (int i=1;i<=n;i++){
			for (int j=i+1;j<=n;j++){
				ma=max(ma,(s[i] & s[j]));
			}
		}
		cout<<ma;
	}
	else if(m==n-1){
		ma=0;
		k=0;
		for (int i=1;i<=n;i++){
			int b=0;
			for (int j=1;j<=n;j++){
				if(j!=i){
					b=(s[i] & s[j]);
				}
			}
			ma=max(ma,b);
		}
		cout<<ma;
	}
} 