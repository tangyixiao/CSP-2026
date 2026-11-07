#include <cstdio>
#include <iostream>
using namespace std;
int a[200020];

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	scanf("%d%d",&n,&m);
	int maxn=0;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		maxn=max(maxn,a[i]);
	}
	if(m==1){
		cout<<maxn;
	}else{
		int x=1,r=2,big=a[1]&a[2];
		for(int i=3;i<=n;i++){
			if((a[i]&a[x])>=big&&(a[i]&a[x])>=(a[i]&a[r])){
				r=i;
				big=a[i]&a[x];
			}
			else if((a[i]&a[r])>=big&&(a[i]&a[r])>=(a[i]&a[x])){
				x=i;
				big=a[i]&a[r];
			}
		}
		a[x]=0;
		a[r]=0;
		int ans=big;
		for(int i=3;i<=m;i++){
			big=ans&a[1];
			int p=1;
			for(int j=2;j<=n;j++){
				if((ans&a[j])>big){
					p=j;
					big=ans&a[j];
				}
			} 
			ans&=a[p];
		}
		printf("%d",ans);
	}
	
	return 0;
}