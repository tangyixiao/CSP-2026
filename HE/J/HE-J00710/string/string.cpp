#include <bits/stdc++.h>
using namespace std;
void OI(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
}
typedef long long ll;
const int N=2e5+5;
int n,tot;
ll L,a[N];
char c[N];
struct Part{
	ll p,len;
	char c;
}b[N];
int final;
void deal(){
	if(L%2==1){
		ll p=0,mid=L/2+1;
		for(int i=0;i<n;i++){
			if(p+a[i+1]>=mid){
				a[i+1]--,L--;
				if(a[i+1]<=0){
					for(int j=i+2;j<=n;j++)
						a[j-1]=a[j],c[j-1]=c[j];
					n--;
				}
				break;
			}
			p+=a[i+1];
		}
	}
//	for(int i=1;i<=n;i++){
//		printf("%lld %c\n",a[i],c[i]);
//	}puts("------------");
	ll mid=L/2,p=1;
	for(int i=1;i<=n;i++){
		tot++;
		b[tot].p=p,b[tot].len=a[i],b[tot].c=c[i];
		if(p+a[i]>=mid+1){
			final=tot;
			if(p+a[i]>mid+1){
//				cout<<"ILLLLLL"<<endl;
				b[tot].len=mid-p+1;
				tot++;
				b[tot].p=mid+1,b[tot].len=a[i]-(mid-p+1),b[tot].c=c[i];
			}
			mid=L+9999999;
		}
		p+=a[i];
	}
//	for(int i=1;i<=tot;i++){
//		printf("%lld %lld %c\n",b[i].p,b[i].len,b[i].c);
//	}puts("#############");
}
void solve(){
	if(tot==1){
		printf("0");
		return;
	}
	int i=1,j=tot;
	ll ans=0,lasti=b[i].len,lastj=b[j].len;
//	cout<<final<<endl;
//	ll t1=0,t2=0;
//	for(int i=1;i<=final;i++)t1+=b[i].len;
//	for(int i=final+1;i<=tot;i++)t2+=b[i].len;
//	cout<<t1<<' '<<t2<<endl<<endl;
	for(;i<=final;){
//		cout<<i<<' '<<j<<endl;
		if(lasti==lastj){
			if(b[i].c!=b[j].c)ans+=lasti;
			i++,j--;
			lasti=b[i].len,lastj=b[j].len;
		}else if(lasti>lastj){
			if(b[i].c!=b[j].c)ans+=lastj;
			j--,lasti-=lastj;
			lastj=b[j].len;
		}else{
			if(b[i].c!=b[j].c)ans+=lasti;
			i++,lastj-=lasti;
			lasti=b[i].len;
		}
	}
	printf("%lld",ans);
}
int main(){
	OI(); 
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld %c",&a[i],&c[i]);
		L+=a[i];
	}
	deal();
	solve();
	return 0;
}
