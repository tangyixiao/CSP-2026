#include<bits/stdc++.h>
using namespace std;
int n,m;
long long int  k=0;
long long a[200005];
bool cmp(int x,int y){
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
	    scanf("%lld",&a[i]);
	    k=max(k,a[i]);
	}	
	if(m==1) printf("%lld",k);
	else{
		sort(a+1,a+n+1,cmp);
		cout<<a[m];
	}
	return 0;
 } 