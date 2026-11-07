#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long n,much[N],l,x=1,y,sum;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld",&much[i]);
		cin>>c[i];
		l+=much[i];
	}
	y=n;
	while(l>0){
		if(much[x]>much[y]){
			if(c[x]!=c[y]){
				sum+=much[y];
			}
			much[x]-=much[y];
			l-=2*much[y];
			y--;
		}
		else if(much[x]<much[y]){
			if(c[x]!=c[y]){
				sum+=much[x];
			}
			much[y]-=much[x];
			l-=2*much[x];
			x++;
		}
		else if(much[x]==much[y]){
			if(c[x]!=c[y]){
				sum+=much[x];
			}
			l-=2*much[x];
			x++;
			y--;
		}
	}
	printf("%lld",sum);
	return 0;
}
