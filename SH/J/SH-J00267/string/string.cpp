#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[200005];
char c[200005];
long long ans,sum;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	long long mid=sum/2,now=0;
	int i=1,j=n;
	bool f=(sum%2);
	while(i<j&&now<=mid){
		if(c[i]!=c[j]){
			if(a[i]==a[j]){
				ans+=a[i];
				now+=a[i];
				i++;j--;
				if(now>mid){
					ans-=(now-mid);
					if(f)ans++;
					break;
				}
			}else if(a[i]>a[j]){
				a[i]-=a[j];
				ans+=a[j];
				now+=a[j];
				j--;
				if(now>mid){
					ans-=(now-mid);
					if(f)ans++;
					break;
				}
			}else{
				a[j]-=a[i];
				ans+=a[i];
				now+=a[i];
				i++;
				if(now>mid){
					ans-=(now-mid);
					if(f)ans++;
					break;
				}
			}
		}else{
			if(a[i]==a[j]){
				now+=a[i];
				i++;j--;
			}else if(a[i]>a[j]){
				a[i]-=a[j];
				now+=a[j];
				j--;
			}else{
				a[j]-=a[i];
				now+=a[i];
				i++;
			}
		}
		if(a[i]==0)i++;
		if(a[j]==0)j--;
	}
	cout<<ans<<"\n";
	return 0;
}

