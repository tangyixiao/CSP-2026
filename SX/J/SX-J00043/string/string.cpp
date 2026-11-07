#include<bits/stdc++.h>
using ll=long long;
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a[200005];
	char c[200005];
	ll cnt=0;
	scanf("%d",&n);
	//cin>>n;
	string a1="",b="";
	for(int i=1;i<=n;i++){
		scanf("%d %c",&a[i],&c[i]);
		//cin>>a[i]>>c[i];
		cnt+=a[i];
	}if(cnt%2==1){
		ll cnt1=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=a[i];j++){
				cnt1++;
				if(cnt1<=(cnt/2)){
					a1=a1+c[i];
				}else if(cnt1>cnt/2+1){
					b=c[i]+b;
				}
			}
		}
	}else{
		ll cnt1=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=a[i];j++){
				cnt1++;
				if(cnt1<=(cnt/2)){
					a1=a1+c[i];
				}else if(cnt1>=cnt/2+1){
					b=c[i]+b;
				}
			}
		}
	}ll ans=0;
	for(int i=0;i<a1.size();i++){
		if(a1[i]!=b[i]){
			ans++;
		}
	}printf("%d",ans);//<<endl<<a1<<" "<<b<<" "<<cnt;
}