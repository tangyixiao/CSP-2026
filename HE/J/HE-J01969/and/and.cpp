#include<bits/stdc++.h>
using namespace std;
int a[10005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,l,m;
	int maxn=-1;
	cin>>n>>l;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<=n;i++){
		for(int J=1;J<=l;J++){
			m=a[i]&a[i+1];
			if(m>maxn){
				maxn=m;
			}
		}
	}
	cout<<maxn;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
