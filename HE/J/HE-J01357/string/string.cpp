#include <bits/stdc++.h>
using namespace std;
struct node {
	int a;
	char c;
}b[200005];
string s;
long long sum,sum1,ans;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	s+=" ";
	for(int i=1;i<=n;i++) {
		cin>>b[i].a>>b[i].c;
		sum+=b[i].a;
		int x=b[i].a/2,y=b[i].a%2;
		for(int j=1;j<=x;j++) {
			s+=b[i].c;
			s+=b[i].c;
		}
		if(y) s+=b[i].c;
	}
	long long s1=sum/2,s2=sum%2,idx;
//	for(int i=1;i<=n;i++) {
//		sum1+=b[i].a;
//		if(sum1>s1) {
//			idx=i-1;
//			break;
//		}
//	}
//	cout<<s<<" "<<sum<<endl;
	for(long long i=s1+s2+1;i<=sum;i++) {
		long long j=sum-i+1;
//		cout<<i<<" "<<j<<endl;
		if(s[i]!=s[j]) {
			ans++;	
		}
	}
	cout<<ans;
	return 0;
}
