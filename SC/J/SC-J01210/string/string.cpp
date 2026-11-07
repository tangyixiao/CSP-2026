#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef double db;
const int N=2e5+5,mod=998244353;
int n,a[N],num[N],posl,posr;
char s[N];
ll answer,L,R;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%s",&a[i],s);
		num[i]=s[0]-'a';
	}
	posl=1,posr=n,L=1LL*a[1],R=1LL*a[n];
	while(posl<posr){
		if(L<R){
			if(num[posl]!=num[posr]){
				answer+=1LL*L;
			}			
			R-=L,L=0;
			posl++;
			L=1LL*a[posl];
		} else{
			if(L>R){
				if(num[posl]!=num[posr]){
					answer+=1LL*R;
				}				
				L-=R,R=0;
				posr--;
				R=1LL*a[posr];
			} else{
				if(num[posl]!=num[posr]){
					answer+=1LL*R;
				}
				L=0,R=0;
				posl++,posr--;
				L=1LL*a[posl],R=1LL*a[posr];		
			}
		}
	}
	printf("%lld\n",answer);
	return 0;
}