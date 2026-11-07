#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[500005],b[500005];
uniority_set<int> st;
signed main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			for(int k=1;k<=b.size();k++){
				if(a[j]==b[k]){
					for(int e=k;e<=b.size();e++){
						a[e]=0;
					}
				}
			}
			a[j]=a[i];
		}
	}
	return 0;
}
