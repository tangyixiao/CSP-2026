#include<cstdio>
#include<algorithm>
using namespace std;
const int xn=2e5+5;
struct node{
	long long a;
	bool wei[32];
}b[xn];
int n,m,sum;
bool cmp(node x,node y){
	return x.a>y.a;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) scanf("%lld",&b[i].a);
	sort(b+1,b+n+1,cmp);
	for(int i=1;i<=n;i++){
		long long tmp=b[i].a,t=1;
		int j=1;
		while(tmp){
			if(tmp&t){
				tmp-=t;
				b[i].wei[j]=true;
			}
			t*=2;
			j++;
		}
	}
	for(int i=30;i;i--){
		sum=0;
		for(int j=1;j<=n;j++) sum+=b[j].wei[i];
		int tmp=n;
		if(sum>=m){
			for(int j=1;j<=n;j++){
				if(!(b[j].a&(1<<(i-1)))){
					b[j].a=0;
					tmp--;
				}
			}
		}
		else{
			for(int j=1;j<=n;j++) b[j].a&=((1<<31)-1)-(1<<(i-1));
		}
		sort(b+1,b+n+1,cmp);
		n=tmp;
	}
	printf("%d",b[1].a);
	return 0;
}
//好无聊啊……
//写一个简单的加法吧
/*
*/
//代码：
/*
#include<cstdio>
using namespace std;
int sum;
int main(){
	freopen("add.out","w",stdout);
	while(1*2+3-4/5+6%7+8/9-10!=114514) sum++;
	printf("%d",sum);
	return 0;
}
*/
//Nseconds就能运行完
