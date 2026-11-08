#include<bits/stdc++.h>
using namespace std;
long long n,a[200010],sum=0,h,r,L,l;
char s[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i]>>s[i];
	}
	l=1;r=n;
	while(n!=0){
		h=min(a[l],a[r]);
		if(s[l]!=s[r]){
			sum+=h;
		}
		a[l]-=h;a[r]-=h;
		n--;
		if(a[l]==0) l++;
		else r--;
	}
	cout<<sum;
	return 0;
} 
