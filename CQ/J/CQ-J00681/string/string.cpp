#include<bits/stdc++.h>
using namespace std;
const int N=2e5+111;
int a[N];
char b[N];
int n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		cin>>b[i];
	}
	int topl=1,topr=n;
	long long ans=0;
	while(topl<topr){
		int minn=min(a[topl],a[topr]);
		if(b[topl]!=b[topr]){
			ans+=minn;
		}
		a[topl]-=minn;
		a[topr]-=minn;
		if(a[topl]==0){
			topl++;
		}
		if(a[topr]==0){
			topr--;
		}
	}
	printf("%lld",ans);
	return 0;
}
/*
3
2 a
2 b
1 c

2
2 a
3 a

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
