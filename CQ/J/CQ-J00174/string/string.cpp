#include <bits/stdc++.h>
using namespace std;
long long a[200005];
char b[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	long long i=1,l=n,ans=0;
	while(i<l){
		while(a[i]>=a[l]&&b[i]!=b[l]){
			a[i]-=a[l];
			ans+=a[l];
			l--;
		}
		while(a[l]>=a[i]&&b[i]!=b[l]){
			a[l]-=a[i];
			ans+=a[i];
			i++;
		}
		if(a[l]==0){
			l--;
		}
		while(a[i]>=a[l]&&b[i]==b[l]){
			a[i]-=a[l];
			l--;
		}
		while(a[l]>=a[i]&&b[i]==b[l]){
			a[l]-=a[i];
			i++;
		}
		if(a[l]==0){
			l--;
		}
//		i++;
//		cout<<ans;
	}
	cout<<ans;
	return 0;
} 
/*
7
4 a
3 b
2 c
1 b
5 d
2 e
4 a
*/
