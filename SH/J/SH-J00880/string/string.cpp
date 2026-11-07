#include<bits/stdc++.h>
using namespace std;
int n;
char c[200005];
int a[200005];
long long l=0,mid;
long long ans=0;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		l+=a[i];
	}
	if(l%2==0){
		mid=l/2;
		int flag=0;
		long long k=mid;
		int s=1,t=n;
		while(k>0){
			k-=a[++flag];
		}
		while(s<=flag && t>=flag){
			if(c[s]==c[t]){
				if(a[s]==a[t]) ++s,--t;
				else{
					if(a[s]>a[t]) a[s]-=a[t],--t;
					else a[t]-=a[s],++s;
				}
			}
			else{
				if(a[s]==a[t]) ans+=a[s],++s,--t;
				else{
					if(a[s]>a[t]) a[s]-=a[t],ans+=a[t],--t;
					else a[t]-=a[s],ans+=a[s],++s;
				}
			}
		}
		if(s==flag){
			while(t>flag){
				if(c[s]!=c[t]) ans+=a[t];
				t--;
			}
		}
		if(t==flag){
			while(s<flag){
				if(c[s]!=c[t]) ans+=a[s];
				s++;
			}
		}
		cout<<ans<<endl;
	}
	else{
		mid=(l+1)/2;
		int flag=0;
		long long k=mid;
		int s=1,t=n;
		while(k>0){
			k-=a[++flag];
		}
		while(s<flag && t>flag){
			if(c[s]==c[t]){
				if(a[s]==a[t]) ++s,--t;
				else{
					if(a[s]>a[t]) a[s]-=a[t],--t;
					else a[t]-=a[s],++s;
				}
			}
			else{
				if(a[s]==a[t]) ans+=a[s],++s,--t;
				else{
					if(a[s]>a[t]) a[s]-=a[t],ans+=a[t],--t;
					else a[t]-=a[s],ans+=a[s],++s;
				}
			}
		}
		if(s==flag){
			while(t>flag){
				if(c[s]!=c[t]) ans+=a[t];
				t--;
			}
		}
		if(t==flag){
			while(s<flag){
				if(c[s]!=c[t]) ans+=a[s];
				s++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
