//我不明白，为什么本地测试能过，大样例会爆0？？？ 

#include<bits/stdc++.h>
using namespace std;
long long ans=0;
const int N = 2e5+10;
int n;
long long a[N];
char c[N];
long long na[N];
char nc[N];
int cnt=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%s",&a[i],&c[i]);
	}
	int l=1;
	na[++cnt]=a[l],nc[cnt]=c[l];
	for(int i=2;i<=n;i++){
		if(c[i]!=c[l]){
			na[++cnt]=a[i],nc[cnt]=c[i];
			l=i;
		}
		else{
			na[cnt]+=a[i];
		}
	}
	l=1;
	int r=cnt;
	while(l<r){
//		cout<<i-1<<" "<<l<<" "<<r<<endl;
//		cout<<ans<<endl;
		if(na[l]==na[r]){
			if(nc[l]!=nc[r])ans+=na[l];
			l+=1,r-=1;
			continue;
		}
		if(na[l]>na[r]){
			if(nc[l]!=nc[r])ans+=na[r];
			na[l]-=na[r];
			r-=1;
			continue;
		}
		if(na[l]<na[r]){
			if(nc[l]!=nc[r])ans+=na[l];
			na[r]-=na[l];
			l+=1;
			continue;
		}
	}
	cout<<ans;
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b

3000000000


3
2 a
2 b
1 c

2


2
2 a
3 a

0
*/
