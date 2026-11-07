#include<bits/stdc++.h>
using namespace std;
int a[200010];
char c[200010];
int n;
long long sum;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=0;i<n;i++) cin>>a[i]>>c[i];
	int i=0,j=n-1;
	int lft=a[i],rt=a[j];
	while(i<n){
		bool flg=(c[i]!=c[j]);
		if(lft<rt) sum+=lft*flg,rt-=lft,lft=a[++i];
		else sum+=rt*flg,lft-=rt,rt=a[--j];
	}cout<<sum/2;
	return 0;
}
