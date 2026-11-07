#include<bits/stdc++.h>
using namespace std;
long long a,b,cnt[200100],zz,zz1,c,ans;
char e,f[200100];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>a;
	for(int i=1;i<=a;++i){
		cin>>b>>e;
		cnt[i]=b;
		f[i]=e;
	}
	//hi;
	zz=1;
	zz1=a;
	while(1){
		c=min(cnt[zz],cnt[zz1]);
		if(f[zz]==f[zz1]){
			cnt[zz]-=c;
			cnt[zz1]-=c;
		}
		else{
			cnt[zz]-=c;
			cnt[zz1]-=c;
			ans+=c;
		}
		if(cnt[zz]==0){
			zz+=1;
		}
		if(cnt[zz1]==0){
			zz1-=1;
		}
		if(zz==zz1){
			break;
		}
	}
	cout<<ans;
	return 0;
}
