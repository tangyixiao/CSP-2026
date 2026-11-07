#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],b[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	int l=n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int m=1;
	while(m<=-n){
		for(int i=m;i<=n;i++){
			for(int j=n;j>=i;j--){
				if(a[i]==a[j]){
					while(i!=j){
						a[j]==0;
					}
				}
			}
		}
		int cnt=0;
	
		sort(a,a+n+1);
		for(int i=1;i<=n;i++){
			b[a[i]]+=1;
		}
		m+=1;
	}
	for(int i=1;i<=n;i++){
		cout<<b[i]<<' ';
	}
	
	return 0;
}