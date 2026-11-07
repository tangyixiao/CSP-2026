#include<bits/stdc++.h>
using namespace std;
int n,m;
unsigned int mm[31]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824};
unsigned int num[200005];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&num[i]);
	}
	sort(num+1,num+n+1,cmp);
	if(m==1){
		printf("%d",num[1]);
		return 0;
	}
	unsigned int ans=0;
	for(int mf=29;mf>=0;mf--){
		bool flag=true;;
		for(int i=1;i<=m;i++){
			if(num[i]<mm[mf]){
				flag=false;
				break;
			}
		}
		if(flag){
			ans+=mm[mf];
			for(int i=1;i<=n;i++){
				if(num[i]>=mm[mf]){
					num[i]-=mm[mf];
				}
				else{
					n=i-1;
				} 
			}
		}
		else{
			for(int i=1;i<=m;i++){
				if(num[i]>=mm[mf]){
					num[i]-=mm[mf];
				}
				else{
					break;
				}
			}
		}
		sort(num+1,num+n+1,cmp);
	}
	printf("%d",ans);
    return 0;
}
