#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=1e6+10;
int n,a[N];
ll len;
char c[N];
int pre[N],lp,suf[N],ls;
char cp[N],cs[N];
int main(){
//	freopen("C:\\Users\\user\\Desktop\\输入.txt","r",stdin);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%s",&a[i],&c[i]);
		len+=a[i];
	}
	ll sum;
	sum=0;
	for(int i=1;i<=n;i++){
		pre[i]=min((ll)a[i],len/2-sum);
		cp[i]=c[i];
		sum+=a[i];
//		cout<<pre[i]<<" "<<cp[i]<<"\n";
		if(sum>=len/2){
			lp=i;
			break;
		}
	}
//	cout<<"\n";
	sum=0;
	for(int i=n,sum=0;i>=1;i--){
		suf[n-i+1]=min((ll)a[i],len/2-sum);
		cs[n-i+1]=c[i];
		sum+=a[i];
//		cout<<suf[n-i+1]<<" "<<cs[i]<<"\n";
		if(sum>=len/2){
			ls=n-i+1;
			break;
		}
	}
	ll ans=0;
	ll suml=0,sumr=0;
	for(int l=1,r=0;l<=lp;l++){
		if(sumr>suml&&sumr!=0){
			if(cp[l]!=cs[r])ans=ans+(ll)min(sumr-suml,(ll)pre[l]);
		}
		suml+=(ll)pre[l];
		while(sumr<suml){
			if(cp[l]!=cs[r+1])ans=ans+(ll)min(suml-sumr,(ll)suf[r+1]);
			r+=1,sumr+=(ll)suf[r];
		}
	}
	if(len==1)printf("0");
	else printf("%lld",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}