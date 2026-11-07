#include<bits/stdc++.h>
using namespace std;
int n,z=1e+9,ans=0;
char s[1000000005];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	int b=1;
	for(int i=1;i<=n;i++){
		int x;char y;
		cin>>x>>y;
		cout<<x<<y<<endl;
		for(int j=1;j<=x;j++){
			s[b]=y;
			b++;
		}
	}
	for(int i=1;i<=z;i++){
		if(s[i]!=0)ans++;
	}
	return 0;
}
