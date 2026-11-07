#include<bits/stdc++.h>
using namespace std;
struct S{
	long long m;
	char c;
}a[200005],b[200005];
int main(){
	freopen("string.in","w",stdin);
	freopen("string.out","r",stdout);
	int n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i].m>>a[i].c;
	for(int i=1,j=n;i<=n,j>=1;i++,j--)b[j]=a[i];
	for(int i=1;i<=n;i++){
		if(a[i].c!=b[i].c&&a[i].m!=b[i].m){
			ans+=abs(a[i].m-b[i].m);
		}
		else if(a[i].c!=b[i].c&&a[i].m==b[i].m){
			ans+=a[i].m;
		}
	}
	cout<<ans;
	return 0;
}
