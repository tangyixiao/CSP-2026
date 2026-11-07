#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],Max=-1e9;
int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for( int i=1; i<=n; i++ ) cin>>a[i];
	for( int i=1; i<=n; i++ ){
		for( int j=1; j<=n; j++ ){
			if(j!=i){
				Max=max(Max,a[i]&a[j]);
			}
		}
	}
	cout<<Max;
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
