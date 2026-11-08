#include<bits/stdc++.h>
using namespace std;
int n,ans,num;
int a[200005];
char c[200005];
string s;
long long cnt=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%s",&a[i],&c[i]);
		if(c[i]==c[i-1])num++;
		for(int j=cnt;j<=cnt+a[i];j++){
			s[j]=c[i];
		}
		cnt+=a[i];
	}
	if(num==n-1){
		printf("0");
		return 0;
	}
	for(int i=1;i<=(cnt/2)+1;i++){
		if(s[i]!=s[cnt+1-i])ans++;
	}
	printf("%d",ans);
	return 0;
}
