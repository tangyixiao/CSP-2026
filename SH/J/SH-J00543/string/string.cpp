#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MaxN = 2e5+100;
int n,ans=0;
int a[MaxN];
char c[MaxN];
int totLen = 0;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i = 1; i <= n; i++){
		cin>>a[i]>>c[i];
		totLen += a[i];
	}
	
	int l = 0, r = n+1,lsum=0,rsum=0;
	while(lsum < totLen/2){
		l++;
		if(lsum+a[l]>totLen/2){
			lsum = totLen/2;
		}else{
			lsum+=a[l];
		}
//		printf("rsum=%d,lsum=%d\n",rsum,lsum);
		while(true){
			if(rsum==lsum)break;
//			printf("rsum=%d,lsum=%d\n",rsum,lsum);
			if(a[r]==0){
				r--;
			}
//			printf("r=%d\n",r);
			if(rsum+a[r]>lsum){
				int res = (lsum-rsum);
				rsum += res;
				a[r] -= res;
				if(c[r]!=c[l])ans+=res;
			}
			else{
				int res = a[r];
				a[r] = 0;
				if(c[r]!=c[l])ans+=res;
				rsum += res;
			}
		}
	}
	cout << ans << '\n';
	fclose(stdin);
	fclose(stdout);
	return 0;
}
