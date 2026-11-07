#include<bits/stdc++.h>
using namespace std;
long long n,m,a[1000010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long ma;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	ma=INT_MIN;
	sort(a+1,a+n+1);
	for(int i=1;i<n;i++){
		if(ma<a[i]){
			ma=a[i];
		}
	}
	cout<<ma;
	return 0;
}
