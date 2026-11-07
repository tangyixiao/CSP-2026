#include<bits/stdc++.h>
#define ll long long
#define N 210000
#define gtc getchar
#define ptc putchar
using namespace std;
inline ll read(){
	ll ans=0,w=1;
	char c=getchar();
	while(!isdigit(c)){
		if(c=='-') w=-1;
		c=getchar();
	}
	while(isdigit(c)){
		ans=ans*10+(c-'0');
		c=getchar();
	}
	return ans*w;
}
inline void write(ll ans){
	if(ans<0) ans=-ans,ptc('-');
	if(ans>9) write(ans/10);
	ptc(ans%10+'0');
}
ll n,a[N],sum,ans;
string s,t;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	n=read();
	for(int i=1;i<=n;i++){
		a[i]=read(),c[i]=getchar();
		sum+=a[i];
	}
	if(sum&1){
		int sum1=sum;
		for(int i=1;i<=n;i++){
			sum1-=a[i];
			if(sum1<=sum/2){a[i]--;break;}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s+=c[i];
			if(s.size()==(unsigned int)sum/2) break;
		}
		if(s.size()==(unsigned int)sum/2){
			for(int j=n;j>=i;j--){
				for(int k=1;k<=a[j];k++){
					t+=c[j];
					if(t.size()==(unsigned int)sum/2) break;
				}
				if(t.size()==(unsigned int)sum/2) break;
			}
			break;
		}
	}
	for(unsigned int i=0;i<s.size();i++){
		if(s[i]!=t[i]) ans++;
	}
	write(ans);
	return 0;
}