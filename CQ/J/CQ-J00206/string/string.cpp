#include<bits/stdc++.h>
using namespace std;
typedef int intt;
#define int long long
const int maxn=2e5+10;
int n,sum,cnt1,cnt2,j=1,ans;
struct node{int x;char c;};
node a[maxn],b[maxn],c[maxn];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i].x>>a[i].c,sum+=a[i].x;
	int tmp=0,i,tmp1=0,tmp2=0;
	for(i=1;i<=n;i++){
		if(tmp+a[i].x<=sum/2)tmp+=a[i].x,b[++cnt1]=a[i];
		else break;
	}
	if(tmp!=sum/2)b[++cnt1]={sum/2-tmp,a[i].c};tmp=0;
	for(i=n;i>=1;i--){
		if(tmp+a[i].x<=sum/2)tmp+=a[i].x,c[++cnt2]=a[i];
		else break;
	}
	if(tmp!=sum/2)c[++cnt2]={sum/2-tmp,a[i].c};
	for(int i=1;i<=cnt1;i++){
		tmp1+=b[i].x;
		while(tmp2+c[j].x<=tmp1&&j<=cnt2){
			if(c[j].c!=b[i].c)ans+=c[j].x;
			tmp2+=c[j].x,j++;
		}
		if(tmp2<tmp1){
			if(c[j].c!=b[i].c)ans+=tmp1-tmp2;
			c[j].x-=(tmp1-tmp2);tmp2=tmp1;
		} 
	}
	cout<<ans;
	return 0;
}



/*

*/



