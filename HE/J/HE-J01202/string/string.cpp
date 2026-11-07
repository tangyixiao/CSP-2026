#include<bits/stdc++.h>
using namespace std;
int n;
long long m,cnt,ans;
const int N=1e9+5; 
char c,a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%ld%s",&m,&c);
		for(int j=0;j<m;j++){
			a[++cnt]=c;
		}
	} 
	int j=cnt;
	for(int i=1;i<=j;i++){
		if(a[i]!=a[j]) ans++;
		j--;
	}
	printf("%ld",ans);
	return 0;
}
