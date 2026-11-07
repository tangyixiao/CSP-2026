#include<bits/stdc++.h>
using namespace std;
long long a[100005];
bool cmp(long long a,long long b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		int x=-1;
		for(int i=1;i<=n;i++){
		if(a[i]>x) x=a[i];

		}
		cout<<x;
		return 0;
	}
	if(m==n){
		int x=a[1];
		for(int i=1;i<=n;i++){
			x=x&a[i];

		}
		cout<<x;
		return 0;
	}
	if(m==2){
		int x=-1;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if(a[i]&a[j]>x){
					x=a[i]&a[j];
				}
			}
		}
		cout<<x;
		return 0;
	}
	sort(a+1,a+n+1,cmp);
	cout<<a[m];
	return 0;
}