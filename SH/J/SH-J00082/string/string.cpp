#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	scanf("%d",&n);
	long long a[n+1];
	char c[n+1];
	for(int i=1;i<=n;i++){
		scanf("%d %c",&a[i],&c[i]);
	}
	int l=1,r=n;
	int lleft=a[l],rleft=a[r];
	long long ans=0;
	while(l<r){
		if(lleft>rleft){
			if(c[l]!=c[r])ans+=rleft;
			r--;
			lleft=a[l]-rleft;
			rleft=a[r];
		}
		else if(lleft<rleft){
			if(c[l]!=c[r])ans+=lleft;
			l++;
			rleft=a[r]-lleft;
			lleft=a[l];
		}
		else{
			if(c[l]!=c[r])ans+=lleft;
			l++;
			r--;
			lleft=a[l];
			rleft=a[r];
		}
	}
	cout<<ans<<endl;
	return 0;
}
