#include<bits\stdc++.h>
using namespace std;
int n,c[200005];
char an[1000000010],b[200005];
long long ans,m=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d %c",&c[i],&b[i]);
		for(int j=1;j<=c[i];j++) an[j+m]=b[i];
		m+=c[i];
	}
	for(int i=1;i<=m/2;i++){
		if(an[i]!=an[m+1-i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
} 