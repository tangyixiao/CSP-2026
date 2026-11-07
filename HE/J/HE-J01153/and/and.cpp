#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],l,o;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	if(m==n){
		l=a[1];
		for(int i=2;i<=n;i++){
			l=(l&a[i]);
		}
		cout<<l;
	}
	else if(m==1){
		for(int i=1;i<=n;i++){
			l=max(l,a[i]);
		}
		cout<<l;
	}
	else if(m==n-1){
		for(int i=1;i<=n;i++){
			if(i==1)o=a[2];
			else o=a[1];
			for(int j=1;j<=n;j++){
				if(j!=i){
					if(o==a[2]){
						if(j!=2){
							o=(o&a[j]);
						}
					}
					else{
						if(j!=1){
							o=(o&a[j]);
						}
					}
				}
			}
			l=max(l,o);
		}
		cout<<l;
	}
	else{
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i!=j){
					o=(a[i]&a[j]);
				}
				l=max(l,o);
			}
		}
		cout<<l;
	}
	return 0;
}
