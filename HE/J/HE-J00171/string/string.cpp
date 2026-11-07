#include <bits/stdc++.h>
using namespace std;
const int N=5e5+10;
long long l=0,n,total=0,d[N],ll=0,cnt;
long long la,lb;
char w[N];
struct Num{
	long long num;
	char c;
}a[N],b[N];
bool f=false;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>d[i]>>w[i];
		ll+=d[i];
	}
	for(int i=1;i<=n;i++){
		l+=d[i];
		if(l>ll/2&&!f){
			a[++la].num=(ll/2)-(l-d[i]);
			a[la].c=w[i];
			if(ll%2==1){
				b[++lb].num=l-ll/2-1;
				b[lb].c=w[i];
			}else{
				b[++lb].num=l-ll/2;
				b[lb].c=w[i];
			}
			f=true;
		}else if(l>ll/2&&f){
			b[++lb].num=d[i];
			b[lb].c=w[i];
		}else{
			a[++la].num=d[i];
			a[la].c=w[i];
		}
	}
	cnt=lb;
	for(long long i=1;i<=la;i++){
		while(a[i].num!=0LL){
			if(a[i].num>=b[cnt].num){
				if(a[i].c!=b[cnt].c){
					total+=b[cnt].num;
					a[i].num-=b[cnt].num;
				}else{
					a[i].num-=b[cnt].num;
				}
				cnt--;
			}else{
				if(a[i].c!=b[cnt].c){
					total+=a[i].num;
					b[cnt].num-=a[i].num;
					a[i].num=0;
					break;
				}else{
					b[cnt].num-=a[i].num;
					a[i].num=0;
					break;
				}
			}
		}
	}
	cout<<total;
	return 0;
}
