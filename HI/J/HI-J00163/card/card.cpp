#include <bits/stdc++.h>
using namespace std;
long long a[100000];
long long b[100000];
long long c[100000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(a[i]==b[j]){
				for(int x=j;x<=i;x++){
					b[x]=0;
				}
				break;
			}
		}
		for(int i=1;i<=n;i++){
			c[b[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i];
	}
	for(int i=1;i<=n;i++){
		cout<<b[i];
	}
	return 0;
}

