#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N=200000+5;
int a[N];
int n,m;
bool b[N];
int anss;
signed main(){
	freopen("and.in","r",stdin);
    freopen ("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+1+n);
	bool q=true;
	for(int i=1;i<=n;i++){
		if(a[i]!=i-1){
			q=false;
			break;
		}
	}
	if(q){
		int ans=a[n];
		for(int i=n;i>=n-m+1;i--){
			ans=ans&a[i];
		}
		cout<<ans<<endl;
		return 0;
	}
	if(m==1){
		sort(a+1,a+1+n);
		cout<<a[n];
		return 0;
	}
	else if(m==n){
		int ans=a[1];
		for(int i=1;i<=n;i++)ans=ans&a[i];
		cout<<ans;
		return 0;
	}
	else if(m==2){
		int ans=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j)continue;
				int k=a[i]&a[j];
				ans=max(k,ans);
			}
		}
		cout<<ans;
		return 0;
	}
	if(a[n]<4){
		int sm1=0,sm2=0,sm3=0;
		for(int i=1;i<=n;i++){
			if(a[i]==1)sm1++;
			else if(a[i]==2)sm2++;
			else if(a[i]==3)sm3++;
		}
		if(sm3>=m)cout<<3;
		else if(sm3+sm2>=m)cout<<2;
		else if(sm3+sm2+sm1>=m)cout<<1;
		else cout<<0;
		return 0;
	}
	if(n<=20){
		int ans=a[n];
		for(int i=n;i>=n-m+1;i++)ans=ans&a[i];
		cout<<ans<<endl;
		return 0;
	}
	else {
		cout<<a[n-m+1];
		return 0;
	}
	cout<<0;
	return 0;
}
