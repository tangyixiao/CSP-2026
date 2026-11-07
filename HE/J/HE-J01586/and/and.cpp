#include <bits/stdc++.h>
using namespace std;
long long a[200005],s[10005];
int main(){
	//fropen("and.in","r",stdin);
	//fropen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	s[0]=a[1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s[i]=s[i-1]&a[i];
	}
	long long ans=-99999;
	
	for(int i=1;i<=n;i++){
		int o=m-1;
		long long num=a[i];
		for(int j=1;j<=n;j++){
			if(o==0)ans=max(tot,num);
			o--;
			num=num&a[j];
		}
	}
	cout<<ans;
	return 0;
} 
