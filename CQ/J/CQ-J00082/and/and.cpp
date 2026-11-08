#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[1000005];
long long mmaxn=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];		
	}
	for(int i=1;i<=n-m;i++){
		for(int j=i+1;j<=n;j++){
			int maxn=(a[i]&a[j]);
			if(maxn>=mmaxn){
				mmaxn=maxn;
			}
		}
		
	}
	cout<<mmaxn;
	
	
	return 0;
}
