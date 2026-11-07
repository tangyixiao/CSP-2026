#include<bits/stdc++.h>
using namespace std;
long long a[250000];
char c[250000];
string s,s1,s2;
long long t,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(long long i=1;i<=n;i++){
		for(long long j=1;j<=a[i];j++){
			s=s+c[i];	
		}
		t+=a[i];
	}
	long long mid=t/2;
	for(int i=0;i<mid;i++){
		s1=s1+s[i];
	}for(int i=mid;i<t;i++){
		s2=s[i]+s2;
	}
	for(int i=0;i<s1.size();i++){
		if(s1[i]!=s2[i]) ans++;
	}
	cout<<ans;
	return 0;
}
