#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N],n;
long long f[N],b[N];
char c[N];
int s[N];
long long ans,len;
static inline void read(int &x){
	x=0;
	int f=1;
	char c=getchar();
	for(;c<'0'||c>'9';c=getchar()){
		if(c=='-')f=-1;
	}for(;c>='0'&&c<='9';c=getchar()){
		x=(x<<1)+(x<<3)+c-'0';
	}x*=f;
}static inline void write(long long x){
	if(x<0){
		x=-x;
		putchar('-');
	}if(x>9)write(x/10);
	putchar(x%10+'0');
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	read(n);
	for(int i=1;i<=n;++i){
		read(a[i]);
		f[i]=(1ll*a[i]+f[i-1]);
		cin>>c[i];
		len+=1ll*a[i];
	}
	for(int i=n;i>=1;--i){
		b[i]=(1ll*a[i]+b[i+1]);
	}int j=n+1;
	for(int i=1;i<=n&&i<j;i++){
		
		if(f[i-1]<=b[j]&&i!=1){
			if(c[i]!=c[j]){
				if(f[i]<=b[j]){
					ans+=f[i]-f[i-1];
				}else{
					ans+=b[j]-f[i-1];
					
				}
			}
		}
//		if(f[i-1]<b[j]){
//		}
		while(f[i]>b[j]){
			--j;
			if(b[j]<=f[i]){
				if(c[j]!=c[i]){
					ans+=1ll*a[j]; 
				}
			}else{
				if(c[j]!=c[i]){
					ans+=f[i]-b[j+1];
				}
			}
			
		}//cout<<i<<' '<<ans<<'\n';
	}write(ans);
	return 0;
}