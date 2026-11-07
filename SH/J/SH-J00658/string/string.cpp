#include<bits/stdc++.h>
using namespace std;
unsigned long long n,a[200005],als,le,ri,ln=0,rn=0,ans=0;char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;ri=n-1,le=0;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];als+=a[i];
	}
	for(int l=0,r=als;l<als/2;){
		if(ln==0)ln=a[le],le++;if(rn==0)rn=a[ri],ri--;
		int sbls=min(ln,rn);
		if(c[le-1]!=c[ri+1])ans+=sbls;
		l+=sbls,ln-=sbls,rn-=sbls;
	}cout<<ans;
}
