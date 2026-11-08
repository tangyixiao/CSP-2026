#include<bits/stdc++.h>
#define int long long
#define pii pair<int,int>
using namespace std;
int n,ans;string s;
struct node{
	int x;char c;
}a[200005];
char pf=' ';
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    scanf("%lld",&n);
    for(int i=1;i<=n;i++){
    	scanf("%lld %c",&a[i].x,&a[i].c);
		if(pf==' ') pf=a[i].c;
		else if(pf!=a[i].c) pf='+';
	}
	if(pf!='+') printf("0"),exit(0);
	s+=' ';
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i].x;j++){
			s+=a[i].c;
		}
	}
	int m=s.size()-1;
	for(int i=1,j=m;i<j;i++,j--){
		if(s[i]!=s[j]) ans++;
	}
	printf("%lld",ans);
	return 0;
}

