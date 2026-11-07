#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef double db;
const int N=3e5+5,mod=998244353;
int n,m,a[N],p[N],tot,now[N],answer; 

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		p[++tot]=a[i];
	}
	for(int i=30;i>=0;i--){
		int top=0;
		for(int j=1;j<=tot;j++){
			if((1<<i)&p[j]){
				now[++top]=p[j];
			}
		}
		if(top>=m){
			tot=top;
			for(int j=1;j<=tot;j++){
				p[j]=now[j];
			}
			answer+=(1<<i);
		}
	}
	printf("%d\n",answer);
	return 0;
}