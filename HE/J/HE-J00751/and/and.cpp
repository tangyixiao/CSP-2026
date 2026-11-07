#include<bits/stdc++.h>
using namespace std;
int a[201000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ans=0;
	cin>>n>>m;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}sort(a+1,a+1+n);
	if(m==1){
		cout<<a[n];
	}else if(m==2){
		for(int i=1; i<=n; i++){
			for(int j=1; j<i; j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
	}else if(m==n){
		for(int i=2; i<=n; i++){
			ans=a[i]&a[i-1];
		}
		cout<<ans;
    }
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
