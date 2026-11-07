#include<bits/stdc++.h>
using namespace std;
int b[200001][31];
bool a[200001];
long long f[200001];
int main(){
	freopen("and.out","w",stdout);
	freopen("and.in","r",stdin);
	int n,m; cin>>n>>m;
	for(int i=1;i<=n;i++){
	    cin>>f[i];
	    int j=1;
	    long long q=f[i];
	    while(q>0){
	        b[i][j]=q%2;
	        q/=2;
	        j++;}}
	for(int j=30;j>=1;j--){
		int sum=0;
		for(int i=1;i<=n;i++)
			if(b[i][j]==1&&a[i]!=1) sum++;
		if(sum>=m){
			for(int i=1;i<=n;i++)
			if(b[i][j]==0) a[i]=1;}}
    long long ans=1073741824;
    for(int i=1;i<=n;i++){
    	if(a[i]!=1) ans=min(ans,f[i]);
	}
	cout<<ans;
    return 0;}