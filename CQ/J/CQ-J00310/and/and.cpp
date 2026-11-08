#include<bits/stdc++.h>
using namespace std;
int a[200005],n,m,an,an2=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	an=a[n-1];
	for(int i=1;i<m;i++){
		an=an&a[n-i-1];
	}
	for(int i=n-1;i>=0;i--){
		if(a[i]==a[i-1]){
			an2=a[i];
			break;
		}
	}
	cout<<max(an,an2);
	return 0;
} 
