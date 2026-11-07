#include<bits/stdc++.h>
using namespace std;
int n,a[200010],c[200010],aa[200010],cc[200010];
long long ans,cnt,d,i,j,mnai,lalala;
char e;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	lalala=0;
	for(i=1;i<=n;i++){
		cin>>a[i]>>e;
		aa[n+1-i]=a[i];
		c[i]=int(e);
		cc[n+1-i]=int(e);
		lalala+=a[i];
	}
	d=(lalala+1)/2;
	for(i=1,ans=0,j=1,mnai=0,cnt=0;cnt<=d;){
		mnai=min(a[i],aa[j]);
			//cout<<c[i]<<"    "<<cc[j]<<"   ";
		if(c[i]!=cc[j]){
			//cout<<c[i]<<"    "<<cc[j]<<"   ";
			ans+=mnai;
			if (cnt+mnai>d){
				ans-=(cnt+mnai-d);
			}
		//	cout<<ans<<"      ";
		}
		cnt+=mnai;
		a[i]-=mnai;
		aa[j]-=mnai;
		if(a[i]==0){
			i++;
		}
		if(aa[j]==0){
			j++;
		}
	}
	cout<<ans;
	return 0;
}
