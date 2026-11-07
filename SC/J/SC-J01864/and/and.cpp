#include <bits/stdc++.h>
using namespace std;
int n,m,cnt;
int MAX;
int a[1000005];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int x[m];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if((a[i]&a[j])>=MAX){
				MAX=(a[i]&a[j]);
			}
		}
	}
	cout<<MAX;

	return 0;
}