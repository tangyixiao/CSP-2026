#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long a[N],n,m,mx=-1,k;
bool cmp(long long a,long long b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(mx,a[i]);
		if(i==1) k=a[1];
		else k=k&a[i]; 
	}
	if(m==1){
		cout<<mx;
	}else if(m==n){
		cout<<k;
	}else if(m==2){
		mx=-1;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				mx=max(a[i]&a[j],mx);
			}
		}
		cout<<mx;
	}
	return 0;
} 
