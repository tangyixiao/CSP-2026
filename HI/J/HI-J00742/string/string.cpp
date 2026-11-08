#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("string.in",r,stdin);
	freopen("string.out",w,stdout);
	int a[20005],n,S1=1,S2=0,cnt=0;
	char c[20005];
	cin>> n;
	for(int i=1;i<=n;i++) {
		cin>> a[i]>> c[i];
	}
	char S[200005];
	for(int i=1;i<=n;i++) {
		for(int q=1;q<=a[i];q++) {
			S[S1]=c[i];
			S1++;
		}
	}
	for(int i=1;i<=S1/2;i++) {
	if(S[i]==S[S1-S2]) {
		S2++;
	}
	else{
		cnt++;
		S2++;
	}
}
	cout<<cnt;
	return 0;
}
