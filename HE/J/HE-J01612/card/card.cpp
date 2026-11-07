#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn=5e5+10;
inline int read(){
	int l=0,r=1;char ch=getchar();
	while(ch<'0'||ch>'9')	if(ch=='-')	r=-1;ch=getchar();
	while(ch>='0'&&ch<='9')	l=l*10+ch-'0';ch=getchar();
	return l*r;
}
int n,k,a[maxn],cnt[maxn],b[maxn];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			bool f=true;
			int z=0;
			for(int k=1;k<=n;k++){
				if(b[i]==a[i]){
					f=false;
					z=i;
					break;
				}
			}
			if(f==false){
				for(int d=z+1;d<=n;d++){
					b[d]=0;
				}
			}else{
				b[j]=a[j];
			}
		}
		for(int j=1;j<=n;j++){
			cnt[b[i]]++;
		}
	}
	for(int i=1;i<=k;i++){
		cout<<cnt[i]<<' ';
	}
	return 0;
}
