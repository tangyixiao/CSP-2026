#include<bits/stdc++.h>
using namespace std;
long long n,s,ans,a[200010];
char c[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		if(c[i]==c[i-1]){
			a[i-1]+=a[i];
			n--,i--;
		}
		s=s+a[i];
	}
	int i=1,j=n,now=0,half=s>>1;
	while(i<j&&now<half){
		int t;
		if(a[i]>a[j]){
			t=a[j];
			if(now+t>=half){
				t=half-now,now=half;
			}else{
				now+=t;
			}
			if(c[i]!=c[j]){
				ans+=t;
			}
			a[i]-=a[j],a[j--]=0;
		}else if(a[i]<a[j]){
			t=a[i];
			if(now+t>=half){
				t=half-now,now=half;
			}else{
				now+=t;
			}
			if(c[i]!=c[j]){
				ans+=t;
			}
			a[j]-=a[i],a[i++]=0;
		}else{
			t=a[i];
			if(now+t>=half){
				t=half-now,now=half;
			}else{
				now+=t;
			}
			if(c[i]!=c[j]){
				ans+=t;
			}
			a[i++]=a[j--]=0;
		}
	}
	cout<<ans;
	return 0;
}