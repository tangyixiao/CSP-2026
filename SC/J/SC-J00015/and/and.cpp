#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin)
	freopen("and.out","w",stdout)
	int n,m,a[1000],b=0,c=0,d[1000];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
			while(a[i]%2==1){
				b=a[i]%=2;
				a[i]/=2;
			}
		
	}
	
	return 0;
}