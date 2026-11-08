#include<bits/stdc++.h>
using namespace std;
int num[200005];
char ch[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %c",&num[i],&ch[i]);
	}
	int l=0,r=n-1;
	long long ans=0LL;
	while(l!=r){
		if(num[l]<num[r]){
			num[r]-=num[l];
			if(ch[l]!=ch[r])ans+=(long long)num[l];
			l++;
		}
		else{
			num[l]-=num[r];
			if(ch[r]!=ch[l])ans+=(long long)num[r];
			r--;
		}
	}
	printf("%lld",ans);
	return 0;
}
