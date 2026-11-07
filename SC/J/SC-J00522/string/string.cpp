#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[300000];
char c[300000];
signed main(){
	ios::sync_with_stdio(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int ii=1;ii<=n;ii++)cin>>a[ii]>>c[ii];
	int i=1,j=n,ri=0,rj=0,ans=0;
	for(;i<=j;){
		if(ri==0&&rj==0&&a[i]==a[j]){
			if(c[i]!=c[j])ans+=a[i];
			
			i++,j--;
			continue;
		}
		if(ri==0&&rj==0){
			if(a[i]>a[j]){
				ri=a[j];
				if(c[i]!=c[j])ans+=a[j];
				
				j--;
			}else{
				rj=a[i];
				if(c[i]!=c[j])ans+=a[i];
			
				i++;
			}
			continue;
		}
		if(ri>0){
			if(a[i]-ri==a[j]){
				
				if(c[i]!=c[j])ans+=a[j];
				
				ri=0;
				i++,j--;
				continue;
			}else{
				if(a[i]-ri>a[j]){
					ri+=a[j];
					if(c[i]!=c[j])ans+=a[j];
					
					j--;
					continue;
				}else{
					
					rj=a[i]-ri;
					if(c[i]!=c[j])ans+=a[i]-ri;
				
					ri=0;
					i++;
					continue;
				}
			}
		}
		if(rj>0){
			if(a[j]-rj==a[i]){
				
				if(c[j]!=c[i])ans+=a[i];
				
				rj=0;
				i++,j--;
				continue;
			}else{
				if(a[j]-rj>a[i]){
					rj+=a[i];
					if(c[i]!=c[j])ans+=a[i];
					i++;
					continue;
				}else{
					
					ri=a[j]-rj;
					if(c[j]!=c[i])ans+=a[j]-rj;
					 
					rj=0;
					j--;
					continue;
				}
			}
		}
	}
	cout<<ans;
	return 0;
}
