#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long d=0;
	long long a[200001];
	char c[200001];
	char s[200000];
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		d+=a[i];
		for(long long j=d-a[i]+1;j<=d;j++){
			s[j]=c[i];
		}
	}
	long long result=0;
	for(long long i=1;i<=d/2;i++){
		if(s[i] != s[d+1-i])result+=1;
	}
		cout<<result;
	return 0;
}