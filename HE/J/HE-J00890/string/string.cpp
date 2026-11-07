#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector
//string a;
ll cnt2;
vec<ll>duan;
ll n,sz,cnt,ai;
vec<char>c;
ll ans;
bool flag=1;
char search(ll f){
	for(ll i=0;i<n;i++){
		if(duan[i]>=f){
			return c[i];
		}
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	c.resize(n+1);
	duan.resize(n+1);
	//cout<<"===============================================\n";
	for(ll i=0;i<n;i++){
		cin>>ai>>c[i];
		duan[i]=cnt+ai;
		cnt+=ai;
	//cout<<"==============================================="<<duan[i]<<' '"\n";
	//printf(">>>%lld%lld",duan[i],cnt);
	}
	while(flag){
		for(ll i=0;i<n;i++){
			if(duan[i]%10!=0){
				flag=0;break;
			}//cout<<">>>"<<duan[i]%10<<'\n';
		}//cout<<"===================================\n"<<++cnt2;
		if(flag^1)break;
		for(ll i=0;i<n;i++)duan[i]/=10;
		cnt2++;
	}
	
	//system("pause");
	for(ll i=0;i<duan.size()/2;i++){
		if(search(i)!=search(cnt-i)){
			ans++;
			//if(ans%100000000==0)cout<<">>>"<<ans;
		}
	//system("pause");
	}
//	cout<<ans*pow(10,cnt2);
	cout<<ans;
	while(cnt2--)cout<<0;
	return 0;
}

