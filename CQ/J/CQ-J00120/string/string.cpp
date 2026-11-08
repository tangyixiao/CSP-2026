#include<bits/stdc++.h>
using namespace std;
int n;
string s1,s2;
long long sum=0;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long a[n+5];
	char b[n];
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		sum+=a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s1=s1+b[i];
		}
		for(int j=a[i];j>=1;j--){
			s2=b[i]+s2;
		}
	}
	long long ans=0;
	for(int i=0;i<sum;i++){
		if(s1[i]!=s2[i]) ans++;
	}
	cout<<ans/2;
	return 0;
}
