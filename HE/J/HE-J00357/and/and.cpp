#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,maxn=-1,ans=0;
int a[N];
bool flag=true;
bool check(int x){
	while(x>1){
		if(x%2!=0)return false;
		x/=2;
	}
	return true;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
    	scanf("%d",&a[i]);
    	maxn=max(maxn,a[i]);
    	if(flag&&(!check(a[i])))flag=false;
	}
	if(n==m){
		ans=a[1];
		for(int i=2;i<=n;i++)ans&=a[i];
		printf("%d",ans);
	}
	else{
	if(m==1)scanf("%d",maxn);
	else{
		if(flag){
			sort(a+1,a+1+n);
			printf("%d",a[m]);
		}
		else{
			if(m==2){
				for(int i=1;i<=n;i++){
					for(int j=1;j<=n;j++){
						if(i==j)continue;
						ans=max(ans,a[i]&a[j]);
					}
				}
				printf("%d",ans);
			}
		}
	}
    }
	return 0;
} 
