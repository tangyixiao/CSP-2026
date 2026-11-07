#include<bits/stdc++.h>
using namespace std;
const int N=2e+5,Mod=1e8;
int n;
unsigned long long a[N],ans1=0,ans2=0;
char tmp,c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d %c",&a[i],&c[i]);
	int l=1,r=n;
	while(l<r){
		if(c[l]!=c[r]){
		ans2+=min(a[l],a[r])%Mod;
		}
	    if(a[l]==a[r]){
		    a[l]=0,a[r]=0;
		    l++,r--;
		}
		else{
			if(a[l]>a[r]){
			    a[l]-=a[r],a[r]=0;
			    r--;
		    }
			else{
				a[r]-=a[l],a[l]=0;
				l++;
			}
		}
	}
	printf("%d",ans2);
	return 0;
}
