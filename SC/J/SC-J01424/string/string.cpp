#include<bits/stdc++.h>
using namespace std;
long long n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	string a;
	long long gs;
	char s;
	for(long long i=1;i<=n;i++){
		cin>>gs>>s;
		for(long long j=1;j<=gs;j++)
			a+=s;
	}
	long long m=a.size();
	long long ans=0;
	if(m%2==0){
		long long l=m/2-1;
		long long r=m/2;
		while(l>=0&&r<m){
			if(a[l]!=a[r])
				ans++;
			l--;
			r++;
		}
	}
	if(m%2!=0){
		long long l=m/2-1;
		long long r=m/2+1;
		while(l>=0&&r<m){
			if(a[l]!=a[r])
				ans++;
			l--;
			r++;
		}
	}
	cout<<ans;
	return 0;
}