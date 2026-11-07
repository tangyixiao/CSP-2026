#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n;
char c[N],s[2];
long long a[N],ans;
int main(){
	freopen("string.in","r",stdin),freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%lld%s",&a[i],s),c[i]=s[0];
	for(int i=0,j=n-1;i<j;){
		long long k=min(a[i],a[j]);
		ans+=k*(c[i]!=c[j]),a[i]-=k,a[j]-=k;
		if(!a[i])i++;
		if(!a[j])j--;
	}
	printf("%lld\n",ans);
}