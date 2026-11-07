#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a[2010],ans=0;
	char c[2010];
	cin>>n;
	string s="";
	bool samec=1,samea=1;
	for (long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		if (i!=1){
			if (c[i]!=c[i-1]){
				samec=0;
			}
			if (a[i]!=a[i-1]){
				samea=0;
			}
		}
	}
	if (samec){
		cout<<0;
		return 0;
	}
	if (samea){
		long long l=1,r=n;
		while (1){
			if (c[l]!=c[r]){
				ans+=a[1];
			}
			l++;
			r--;
			if ((r-l)<=0){
				break;
			}
		}
		cout<<ans;
		return 0;
	}
	for (long long i=1;i<=n;i++){
		for (long long j=1;j<=a[i];j++){
			s=s+c[i];
			
		}
	}
	long long l=0,r=s.length()-1;
	
	while (1){
		if (s[l]!=s[r]){
			ans++;
		}
		l++;
		r--;
		if ((r-l)<=0){
			break;
		}
	}
	cout<<ans;
	return 0;
}
