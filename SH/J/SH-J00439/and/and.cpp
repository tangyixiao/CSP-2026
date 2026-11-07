#include<bits/stdc++.h>
using namespace std;
long long n,m,a[20010],anss;
int main(){
//	freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}
	if(m==n){
		int ans=0,j=0;
		bool c=1,w=1;
		while(c){
			c=0,w=1;
			for(int i=1;i<=n;i++){
				if(a[i]%2==0) w=0;
				if(a[i]==0) c=0;
				a[i]/=2;
			}
			if(w) ans+=(1<<(j++));
			else j++;
		}
		cout<<ans;
		return 0;
	}
	if(m==2){
		long long k=0,f,y,z;
		bool c=1,w=1;
		for(int i=1;i<=n;++i){
			for(int j=1;j<=n;++j){
				if(i==j) continue;
				f=0,y=a[i],z=a[j];
				while(c){
					c=0,w=1;
					if(y%2==0||z%2==0) w=0;
					if(y==0||z==0) c==0;
					y/=2,z/=2;
					if(w) f+=(1<<(k++));
					else k++;
				}
				anss=max(anss,f);
			}
		}
		cout<<anss;
	}
	return 0;
}
