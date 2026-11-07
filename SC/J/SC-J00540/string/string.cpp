#include<bits/stdc++.h>
using namespace std;
struct zip{
	char c;
	long long l;
}a[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld %c",&a[i].l,&a[i].c);
		if(a[i].c==a[i-1].c){
			a[i-1].l+=a[i].l;
			i--;
			n--;
		}
	}
	long long sum=0;
	for(int i=1;i<=n;i++){
		if(a[i].c!=a[n-i+1].c){
			if(a[i].l!=a[n-i+1].l){
				if(a[i].l>a[n-i+1].l){
					a[n-i+1].l+=1;
					a[n-i].l-=1;
				}else{
					a[n-i+1].l-=1;
					a[n-i].l+=1;
				}
			}
			a[n-i+1].c=a[i].c;
			sum+=a[i].l;
		}else{
			if(a[i].l!=a[n-i+1].l){
				if(a[i].l>a[n-i+1].l){
					a[i].l-=1;
					a[i+1].l+=1;
				}else{
					a[i].l+=1;
					a[i+1].l-=1;
				}
			}
		}
	}
	printf("%lld",sum);
	return 0;
}