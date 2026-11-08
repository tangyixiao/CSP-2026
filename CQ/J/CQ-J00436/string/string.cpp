#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=200005;
int n,a[N],a2[N],cnt,ans;
char c[N],c2[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		cnt+=a[i];
	}
	for(int i=1,j=n;i<=n;i++,j--){
		a2[i]=a[j];
		c2[i]=c[j];
	}
	int x=0,y=0,t=0,t2=0;
	for(int i=1;i<=n;i++){
		if(x+a[i]>cnt/2){
			t=i;
			a[i]=cnt/2-x;
			break;
		}
		x+=a[i];
	}
	for(int i=1;i<=n;i++){
		if(y+a2[i]>cnt/2){
			t2=i;
			a2[i]=cnt/2-y;
			break;
		}
		y+=a2[i];
	}
	int l=1,r=1;
	while(l<=t||r<=t2){
		if(a[l]==a2[r]){
			if(c[l]!=c2[r])ans+=a[l];
			l++;
			r++;
		}else if(a[l]>a2[r]){
			if(c[l]!=c2[r])ans+=a2[r];
			a[l]-=a2[r++];
		}else{
			if(c[l]!=c2[r])ans+=a[l];
			a2[r]-=a[l++];
		}
	}
	cout<<ans;
	return 0;
}
