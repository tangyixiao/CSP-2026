#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,a[N],e[N]={0};
int main{
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	int ans;
	for(int k=1;k<=m;k++){
		int maxn=-2e9;
		for(int i=1;i<=n;i++){
			if(e[i]==1)continue;
			if(maxn<=a[i]){
				maxn=a[i];
				e[i]=1;
			}
		}
		ans=maxn;
	} 
	cout<<ans;
    return 0;
}
