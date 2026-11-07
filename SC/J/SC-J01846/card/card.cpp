#include<bits/stdc++.h>
using namespace std;
long long a[500005],book[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	scanf("%lld%lld",&n,&m);
	for(int i = 1;i <= n;i++){
		scanf("%lld",&a[i]);
	}
	for(int i = 1;i <= n;i++){
		stack<int> k;
		int nt[300005];
		for(int i = 1;i <= m;i++)nt[i]=0;
		for(int j = i;j <= n;j++){
			if(nt[a[j]]==0){
				k.push(a[j]);
				nt[a[j]]++;
			}else{
				while(nt[a[j]]){
					nt[k.top()]--;
					k.pop();
				}
				k.push(a[j]);
				nt[a[j]]++;
			}
		}
		for(int i = 1;i <= m;i++)if(nt[i])book[i]++;
	}
	for(int i = 1;i <= m;i++)printf("%lld ",book[i]);
	return 0;
}