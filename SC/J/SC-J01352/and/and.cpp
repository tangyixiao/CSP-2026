#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
long long a[maxn];
int main(){
	freopen("and.in","w",stdin);
	freopen("and.out","r",stdout);
	int n,m;
	cin>>n>>m;
	long long p=0;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	if(n==m){
		long long h=a[1];
		for(int i=2;i<=m;++i){
			h&=a[i];
		}
		cout<<h;
	}else if(m==2){
		long long h=0,k;
		for(int i=1;i<=n;++i){
			for(int j=2;j<=n;++j){
				k=a[i]&a[j];
			}
			h=max(k,h);
		}
		cout<<h;
		
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}