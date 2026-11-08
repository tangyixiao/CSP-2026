#include<bits/stdc++.h>
using namespace std;
int n;
struct s{
	long long x;
	char y;
};
s a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen ("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i].x);
		cin>>a[i].y;
	}
	long long cnt=0;
	int j=n;
	for(int i=1;i<=n/2;i++){
		if(a[i].y==a[j].y){
			if(a[i].x>a[j].x){
				a[i].x=a[i].x-a[j].x;
				i--;
				j--;
			}
			else if(a[i].x<a[j].x){
				a[j].x=a[j].x-a[i].x;
			}
			else continue;
		}
		else{
			if(a[i].x==a[j].x){
				cnt=cnt+a[i].x;
				j--;
			}
			else if(a[i].x>a[j].x){
				cnt=cnt+a[j].x;
				a[i].x=a[i].x-a[j].x;
				i--;
				j--;
			}
			else{
				cnt=cnt+a[i].x;
				a[j].x=a[j].x-a[i].x;
			}
		}
	}
	printf("%lld",cnt);
	return 0;
}
