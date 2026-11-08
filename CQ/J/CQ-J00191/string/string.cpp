#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n,a[N],L,ans;
char c[N];
inline int read(){
	int x=0,f=1;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-') f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){x=x*10+ch-48;ch=getchar();}
	return x*f;
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;for(int i=1;i<=n;i++) cin>>a[i]>>c[i],a[i]+=a[i-1];
	int x1=1,x2=a[1],y1=a[n],y2=a[n-1]+1,i=1,j=n;char ch1=c[1],ch2=c[n];
	while(x2<y1){
		if(ch1!=ch2){
			int len1=x2-x1+1,len2=y1-y2+1;
			if(len1<len2){
				y1-=len1;
				ans+=len1;
				i++;
				ch1=c[i];
				x2=a[i];
				x1=a[i-1]+1;
			}else{
				x1+=len2;
				j--;
				ans+=len2;
				ch2=c[j];
				y2=a[j-1]+1;
				y1=a[j];
			}
		}
		else{
			int len1=x2-x1+1,len2=y1-y2+1;
			if(len1<len2){
				y1-=len1;
				i++;
				ch1=c[i];
				x2=a[i];
				x1=a[i-1]+1;
			}else{
				x1+=len2;
				j--;
				ch2=c[j];
				y2=a[j-1]+1;
				y1=a[j];
			}
		}
	} 
	cout<<ans;
	return 0;
} 
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
