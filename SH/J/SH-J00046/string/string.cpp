#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=200005;
int n,ans;
int a[N],sum[N];
char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld %c",&a[i],&c[i]);
		sum[i]=sum[i-1]+a[i];
	}
	int len=sum[n];
	for(int i=1;i<=n;i++){
		int l=len-sum[i]+1,r=len-sum[i-1];
		int pl=lower_bound(sum+1,sum+n+1,l)-sum;//第一个右>=l
		int pr=lower_bound(sum+1,sum+n+1,r)-sum;//最后一个左<=r == 第一个右>=r 
		for(int j=pl;j<=pr;j++){
			int l1=max(sum[j-1]+1,l),r1=min(sum[j],r);
			if(c[j]!=c[i]) ans+=r1-l1+1;
		} 
	}
	printf("%lld",ans/2);
	return 0;
}
/*
F1 2026
Ferrari:
	16 Charles Leclerc
	44 Lewis Hamilton
Red Bull Racing:
	3 Max Verstappen
	6 Isack Hadjar
Mercedes:
	63 George Russell
	12 Kimi Antonelli
McLaren:
	4 Lando Norris
	81 Oscar Piastri
Racing Bulls:
	30 Liam Lawson
	41 Arvid Lindblad
Alpine:
	10 Pierre Gasly
	43 Franco Colapinto
Haas:
	31 Esteban Ocon
	87 Oliver Bearman
Audi:
	5 Nico Hulkenburg
	27 Gabriel Bortoleto
Williams:
	55 Carlos Sainz
	23 Alexander Albon
Aston Martin:
	14 Fernando Alonso
	18 Lance Stroll
Cadillac:
	11 Sergio Perez
	77 Valtteri Bottas 
*/
