#include<cstdio>
#include<algorithm>
using namespace std;
int A[200005];
char C[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long L=0,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d %c",&A[i],&C[i]);
		L+=A[i];
	}
	int a=1,b=n,aa=A[1],bb=A[n];
	while(a<b){
		if(C[a]!=C[b]){
			ans+=min(aa,bb);
		}
		if(aa>bb){
			aa-=bb;
			b--;
			bb=A[b];
		}
		else if(aa==bb){
			a++;
			b--;
			aa=A[a],bb=A[b];
		}
		else{
			bb-=aa;
			a++;
			aa=A[a];
		}
	}
	printf("%lld",ans);
	return 0;
}
