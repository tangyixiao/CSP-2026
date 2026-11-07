#include<bits/stdc++.h>
using namespace std;

const int N=2e5+10;
int n,m,a[N],num[35];
bool b[N][35];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		for(int j=0;j<=31;j++){
			if(!(a[i]>>j)) break;
			if((a[i]>>j)&1) b[i][j]=true,num[j]++;
		}
	}
	
	int high=31,ans=0;
	while(high>=0){
		for(;high>=0;high--){
			if(num[high]<m) continue;
			break;
		}
		if(high<0) break;
		ans+=(1<<high);
		if(high==0) break;
		memset(num,0,sizeof(num));
		for(int i=1;i<=n;i++){
			if(a[i]<ans) continue;
			for(int j=0;j<high;j++) num[j]+=b[i][j];
		}
	}
	printf("%d",ans);
	return 0;
}