#include<bits/stdc++.h>
using namespace std;

int const N=1e5+10;
bool f[N];
long long a[N],b[N];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	scanf("%lld",&n);
	scanf("%lld",&m);
	stack<long long> stk;
	memset(b,0,sizeof(b));
	for(long long i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	long long j=1;
	long long cnt=1;
	while(cnt<=n){
		memset(f,false,sizeof(f));
		for(int i=j;i<=n;i++){
			if(f[a[i]]){
				while(stk.top()!=a[i]){
					stk.pop();
				}
			}
			else{
				f[a[i]]=true;
				stk.push(a[i]);
			}
		}
		while(stk.size()!=0){
			b[stk.top()]++;
			stk.pop();
		}
		j++;
		cnt++;
	}
	for(long long i=1;i<=m;i++){
		printf("%lld ",b[i]);
	}
	
	return 0;
}
