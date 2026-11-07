#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define int128 __int128
#define gc getchar()
using namespace std;
const int N=2e5+10;
int rd(){
	int x=0,f=1;char c=gc;
	for(;!isdigit(c);c=gc)if(c=='-')f=-1;
	for(;isdigit(c);x=x*10+c-'0',c=gc);
	return x*f;
}
int a[N];char c[N];
int n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	n=rd();
	for(int i=1;i<=n;i++){a[i]=rd();cin>>c[i];}
	ll len=0;
	for(int i=1;i<=n;i++)len+=a[i];
	ll mid=len/2,pos=0,add=0;
	int i=1,j=n;ll ans=0;
	while(i<=j){
		if(a[i]<=a[j]){
			if(c[i]==c[j]){
				a[j]-=a[i];a[i]=0;
			}else{
				ans+=a[i];
				a[j]-=a[i];a[i]=0;
			}
		}else{
			if(c[i]==c[j]){
				a[i]-=a[j];a[j]=0;
			}else{
				ans+=a[j];
				a[i]-=a[j];a[j]=0;
			}
		}
		if(a[i]==0)i++;
		if(a[j]==0)j--;
	}
	cout<<ans<<'\n';
	return 0;
}
