//and
#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,maxn,cnt;
int a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m; 	
	for(int i=1;i<=n;++i){
		cin>>a[i];
		if(maxn<a[i]) maxn=a[i];
	}
	cnt=a[1];
	if(m==1) cout<<maxn<<endl;
	if(m==n){
		for(int i=2;i<=n;++i){
			cnt=cnt&a[i];
		}
		cout<<cnt<<endl;
	}
	if(m==2){
		maxn=0;
		for(int i=1;i<=n;++i){
			for(int j=1;j<=i;++j){
				if(a[i]&a[j]>maxn) maxn=a[i]&a[j];
			}
		}
		cout<<maxn<<endl;
	}
	return 0;
}
