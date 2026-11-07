#include<bits/stdc++.h>
#define N 200009
using namespace std;
int n,a[N],l[N],x,m,ans,p[N];
char ch[N];
string S;
void m3(){
	for(int i=1;i<=n;i++){p[i-1]=0;p[i]=1;
		for(int j=1;j<=n;j++){
			if(p[j]) continue;
			p[j]=1;
			for(int k=1;k<=n;k++){
				if(p[k]) continue;
				ans=max(ans,(a[i]&a[j])&a[k]);
			}
			p[j]=0;
		}
	}cout<<ans;
}
void m4(){
	for(int i=1;i<=n;i++){p[i-1]=0;p[i]=1;
		for(int j=1;j<=n;j++){
			if(p[j]) continue;
			p[j]=1;
			for(int k=1;k<=n;k++){
				if(p[k]) continue;
				p[k]=1;
				for(int v=1;v<=n;v++){
					if(p[v]) continue;
					ans=max(ans,(a[i]&a[j])&a[k]&a[v]);
				}
				p[k]=0;
			}
			p[j]=0;
			}
	}cout<<ans;
}
void m5(){
	for(int i=1;i<=n;i++){p[i-1]=0;p[i]=1;
		for(int j=1;j<=n;j++){
			if(p[j]) continue;
			p[j]=1;
			for(int k=1;k<=n;k++){
				if(p[k]) continue;
				p[k]=1;
				for(int v=1;v<=n;v++){
					if(p[v]) continue;
					p[v]=1;
					for(int v2=1;v2<=n;v2++){
							if(p[v2]) continue;
							ans=max(ans,(a[i]&a[j])&a[k]&a[v]);
					}
					p[v]=0;
				}
				p[k]=0;
			}
			p[j]=0;
		}
	}cout<<ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;cin>>ans;a[1]=ans;
	for(int i=2;i<=n;i++){
		cin>>a[i];
		ans=ans&a[i];
	}
	if(m==1){cout<<*max_element(a+1,a+n+1);return 0;}
	if(m==n){cout<<ans;return 0;}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j) continue;
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;return 0;
	}
	int k=1;
	while(n%k==0){
		k=k<<1;
	}
//	cout<<n<<k;
	if(n==k/2&&a[1]==0&&a[2]==1){
		cout<<n-m;return 0;
	}
	if(m==3){m3();}
	if(m==4){m4();}
	if(m==5){m5();}
//	2^4-2  2^6-1  
//	14  63 127 251  3 2
//	ans=1<<1;//62 31 2   31<<2
//	cout<<ans;


	return 0;
}
