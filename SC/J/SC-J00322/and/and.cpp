#include<bits/stdc++.h>
using namespace std;
long long a[100010],b[100010],n,m,l,h;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	l=a[n];
	for(long long i=n-1;i>n-m;i--){
		if((l&a[i])<a[i-1]){
			if((l&a[i-1])<(a[i]&a[i-1])){
				l=a[i];
			}
			m++;
		}
		else{
			l=l&a[i];
		}
	}
	cout<<l;
}
