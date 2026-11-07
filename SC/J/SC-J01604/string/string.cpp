#include<bits/stdc++.h>
using namespace std;
int n;
long long int p=1,q,k=0;
struct vin
{
	long long int x;
	char y;
}a[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    scanf("%d",&n);
    q=n;
	for(int i=1;i<=n;i++){
	    scanf("%lld",&a[i].x);
	    cin>>a[i].y;
	}	
	while(p!=q){
		if(a[p].x<=a[q].x){
			a[q].x=a[q].x-a[p].x;
			if(a[p].y!=a[q].y) k=a[p].x+k;
			p++;
		}
		else{
			a[p].x=a[p].x-a[q].x;
			if(a[p].y!=a[q].y) k=a[q].x+k;
			q--;
		}
	}
	printf("%lld",k);
	return 0;
 } 