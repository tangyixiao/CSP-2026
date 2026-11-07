#include<bits/stdc++.h>
using namespace std;
long long a[1000000],ans=0,ans1=0,flag=0;
int n,m;
int f[1000000];
void s(int num){
    if(num==0){
    	flag=1;
    	return;
    }
	long long ss=ans1;
    for(int j=1;j<=n;j++){
        if(f[j]==1)continue;
		f[j]=1;
		ans1&=a[j];
		s(num-1);
		if(ss>ans1){
			f[j]=0;
			ans=ss;
		}else ss=ans1;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
        cin>>a[i];
	}
	for(int i=1;i<=n;i++){
        memset(f,0,sizeof(f));
        f[i]=1;
        ans1=a[i];
        flag=0;
        s(m-1);
        if(flag==0)continue;
        ans=max(ans1,ans);
	}
	cout<<ans;
	return 0;
}
