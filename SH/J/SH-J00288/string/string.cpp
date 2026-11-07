#include <bits/stdc++.h>
using namespace std;
const int N=200005;
#define int long long
int n,a[N],sum,rlen,llen;
struct node{
	int num;
	char s;
}l[N],r[N];
char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	int tmp=0,i;
	for (i=1;i<=n;i++){
		if (tmp+a[i]>=sum/2){
			l[++llen]={(sum/2-tmp),c[i]};
			r[++rlen]={(tmp+a[i]-sum/2-sum%2),c[i]};
			break;
		}
		l[++llen]={a[i],c[i]};
		tmp+=a[i];
	}
	for (i=i+1;i<=n;i++)
		r[++rlen]={a[i],c[i]};
	for (int i=1;i<=rlen/2;i++)swap(r[i],r[rlen-i+1]); 
	while (r[rlen].num<=0)rlen--;
	int lp=1,rp=1,ans=0;
	l[llen+1]={10000000000000000,'A'};
	r[rlen+1]={10000000000000000,'B'};
	while (lp<=llen&&rp<=rlen){
		if (l[lp].s==r[rp].s){
			if (l[lp].num==r[rp].num)lp++,rp++;
			else if (l[lp].num>r[rp].num)l[lp].num-=r[rp].num,rp++;
			else r[rp].num-=l[lp].num,lp++;
		}else{
			if (l[lp].num==r[rp].num)ans+=l[lp].num,lp++,rp++;
			else if (l[lp].num>r[rp].num)ans+=r[rp].num,l[lp].num-=r[rp].num,rp++;
			else ans+=l[lp].num,r[rp].num-=l[lp].num,lp++;
		}
	}
	cout<<ans;
	return 0;
}
