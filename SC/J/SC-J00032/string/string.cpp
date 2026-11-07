#include<bits/stdc++.h>
using namespace std;
long long a[200010];
char s[300010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	scanf("%d",&n);
	int len=1;
	char ch;
	for(int i=1;i<=n;i++){
		scanf("%lld %c",&a[i],&ch);
		s[len]=ch;
		len++;
	}
	long long ret=0;
	int y=1;
	int x=n;
	while(y<x){
		if(s[y]!=s[x]){
			if(a[y]==a[x]){
				ret+=a[y];
				a[y]=0;
				a[x]=0;
				y++;
				x--;
			}
			else if(a[y]>a[x]){
				ret+=a[x];
				a[y]-=a[x];
				a[x]=0;
				x--;
			}
			else if(a[y]<a[x]){
				ret+=a[y];
				a[x]-=a[y];
				a[y]=0;
				y++;
			}
		}
		else{
			if(a[y]==a[x]){
				a[y]=0;
				a[x]=0;
				y++;
				x--;
			}
			else if(a[y]>a[x]){
				a[y]-=a[x];
				a[x]=0;
				x--;
			}
			else if(a[y]<a[x]){
				a[x]-=a[y];
				a[y]=0;
				y++;
			}
		}
	}
	printf("%lld",ret);
	return 0;
}