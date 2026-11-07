#include <bits/stdc++.h>
using namespace std;

int a[1000100];
char s[1000100];
long long ans;
int n;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		char x;
		scanf("%d %c",&a[i],&x);
		s[i]=x;
	}
	for(int i=1,j=n;i<j;){
		if(s[i]==s[j]){
			int sum=min(a[i],a[j]);
			a[i]-=sum;
			a[j]-=sum;
		}
		else{
			int sum=min(a[i],a[j]);
			a[i]-=sum;
			a[j]-=sum;
			ans+=sum;
		}
		if(a[i]==0){
			i++;
		}
		if(a[j]==0){
			j--;
		}
	}
	printf("%lld",ans);
	return 0;
}