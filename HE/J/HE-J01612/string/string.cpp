#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+10;
inline int read(){
	int l=0,r=1;char ch=getchar();
	while(ch<'0'||ch>'9')	if(ch=='-')	r=-1;ch=getchar();
	while(ch>='0'&&ch<='9')	l=l*10+ch-'0';ch=getchar();
	return l*r;
}
int n,a[maxn],ans;
char c[maxn];
string s;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<a[i];j++){
			s=s+c[i];
		}
		if(s[i]!=s[n-i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
} 
