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
int n,k,a[maxn],ans;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ma=-1e18;
	for(int i=1;i<=n;i++){
		if(k==1){
			ma=max(ma,a[i]);
		}
		if(k==2){
			for(int j=i+1;j<=n;j++){
				ma=max(ma,a[i]&a[j]);
			}
		}
	}
	cout<<ma;
	return 0;
} 
