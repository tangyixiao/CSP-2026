#include <bits/stdc++.h>
using namespace std;
const long long N=1e6+5;
char s[N],m[N];
long long a[N];
char c[N];
int b=0,d=0,cnt=0,l[N],p[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
		b++;	
		s[b]=c[i];
		p[i]=c[i];
		}
	}
    if(b<1e6){
    	cout<<b/2;
	}
	for(int i=b;i>=0;i--){
		m[i]=s[i];
		l[i]=s[i];
		
	}
	long long y;
	y=b/2;
	for(int i=1;i<=y;i++){
		if(l[i]!=p[i]){
				cnt=cnt+2;
		}
	}
	cout<<cnt;
	return 0;
} 