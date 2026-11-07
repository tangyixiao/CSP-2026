#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;

int n,l,r,rt;
long long ans;
char temp;
struct node{
	int n;
	int a;
}a[maxn];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%s",&a[i].n,&temp);
		a[i].a=temp-'a';
	}l=1,r=n,ans=0;
	while(l<r){
		rt=min(a[l].n,a[r].n);
		if(a[l].a!=a[r].a)ans+=rt;
		if(!(a[l].n-=rt)) l++;
		if(!(a[r].n-=rt)) r--;
	}
	printf("%lld",ans);
	return 0;
}
//双指针 