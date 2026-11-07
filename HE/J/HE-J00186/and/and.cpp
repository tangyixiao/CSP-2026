#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m;
long long a[N];
bool f1,f2,f3;
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>=4){
			f1=1;
		}
		if(a[i]!=i-1){
			f2=1;
		}
		if(a[i]<<1|1-(a[i]+1)!=a[i]){
			f3=1;
		}
	}
	if(m==1){
		long long maxn=-1;
		for(int i=1;i<=n;i++){
			maxn=max(maxn,a[i]);
		}
		cout<<maxn;
		return 0;
	}
	if(m==n){
		long long ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==2){
		long long maxn=-1;
		for(int i=2;i<=n;i++){
			for(int j=1;j<i;j++){
				long long cnt=a[i]&a[j];
				maxn=max(maxn,cnt);
//				cout<<a[i]<<" "<<a[j]<<" "<<cnt<<endl;
			}
		}
		cout<<maxn;
		return 0;
	}
	if(!f2){
		n>>=1;
		if(m>n){
			cout<<"0";
			return 0;
		}
		long long cnt=n;
		n>>=1;
		while(n){
			if(m>n){
				cout<<cnt;
				break;
			}
			cnt=cnt+n;
			n>>=1;
		}
		return 0;
	}
	if(!f3){
		sort(a+1,a+n+1,cmp);
		cout<<a[m];
		return 0;
	}
	if(!f1){
		int cnt[5]={};
		for(int i=1;i<=n;i++){
			cnt[a[i]]++;
		}
		if(m<=cnt[3]){
			cout<<"3";
		}else if(m<=cnt[3]+cnt[2]){
			cout<<"2";
		}else if(m<=cnt[3]+cnt[1]){
			cout<<"1";
		}else{
			cout<<"0";
		}
		return 0;
	}
	return 0;
}
