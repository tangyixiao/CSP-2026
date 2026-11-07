#include<bits/stdc++.h>
using namespace std;
const long long N=2e5+5;
long long a[N],sum[N],s;
long long maxx=0;
long long n,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	for(long long i=1;i<=n;i++){
		if(m==1){
			maxx=max(maxx,a[i]);
		}
		else if(m==2){
		maxx=max(maxx,a[i]&a[i+1]);
		}
		else{
		
			for(long long i=1;i<=n;i++){
				maxx=max(maxx,a[i]&a[i+1]);
			}
	}
	}
	cout<<maxx;
	fclose(stdin);
	fclose(stdout);
	/*
	
	*/
	return 0;
}
