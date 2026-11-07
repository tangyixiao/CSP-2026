#include<bits/stdc++.h>
using namespace std;
int n,a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int lei=0,rii=n+1;
	long long ans=0,nowl=0,nowr=0;
	char lal,ril;
	lei++;
	nowl+=a[lei];
	lal=c[lei];
	while(lei<rii){
		if(nowl<=nowr){
			lei++;
			if(c[lei]!=ril){
				if(nowl+(long long)a[lei]>nowr)ans+=nowr-nowl;
				else ans+=(long long)a[lei];
				
			}
			nowl+=(long long)a[lei];
			lal=c[lei];
		}
		else{
			rii--;
			if(c[rii]!=lal){
				if(nowr+(long long)a[rii]>nowl)ans+=nowl-nowr;
				else ans+=(long long)a[rii];
				
			}
			nowr+=(long long)a[rii];
			ril=c[rii];
		}
	}
	cout<<ans;
	return 0;
}
