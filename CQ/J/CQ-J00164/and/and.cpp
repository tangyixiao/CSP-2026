#include<bits/stdc++.h>
using namespace std;
long long chengfang(int b){
	int ans=1;
	if(b==0)return 1;
	for(int i=0;i<b;i++)ans*=2;
	return ans;
}
int andd(long long a,long long b){
	string aa="",bb="";
	for(int i=30;i>=0;i--){
		if(a>=chengfang(i)){aa=aa+'1';a-=chengfang(i);}
		else aa=aa+'0';
		if(b>=chengfang(i)){bb=bb+'1';b-=chengfang(i);}
		else bb=bb+'0';
	}
	long long ans=0;
	for(int i=0;i<=30;i++){
		if(aa[i]==bb[i] and aa[i]=='1')ans+=chengfang(i-29);
	}
	return ans;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;cin>>n>>m;
	long long a[200000];
	for(int i=0;i<n;i++)cin>>a[i];
	if(m==1){
		int maxx=0;
		for(int i=0;i<=n;i++){
			if(maxx<a[i])maxx=a[i];
		}
		cout<<maxx;return 0;
	}if(m==n){
		int ans=a[0];
		for(int i=1;i<=n;i++){
			ans=andd(ans,a[i]);
		}
		cout<<ans;return 0;
	}if(m==n-1){
		int maxx=0;
		for(int i=0;i<n;i++){
			int ans=a[i];
			for(int j=0;j<n;j++){
				if(j!=i)ans=andd(ans,a[j]);
			}
			if(maxx<ans)maxx=ans;
		}cout<<maxx;
		return 0;
	}
	return 0;
}
