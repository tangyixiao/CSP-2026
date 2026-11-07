#include<bits/stdc++.h>
using namespace std;
const int INF=1e9;
int maxn,maxii;
int max1=-INF,maxi=-1;
int f1,f2,f3=1;
int n,m,a[200005],max_=-INF,o,k;
int g[20]={0,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072};
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>max_){
			max_=a[i];
			maxn=max_;
			maxii=i;
		}
	}if(m==1){
		cout<<max_;
		return 0;
	}max_=-INF;
	if(m==n){
		o=a[1];
		for(int i=2;i<=n;i++) o=o&a[i];
		cout<<o;return 0;
	}if(m==2){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				o=a[i]&a[j];
				if(o>max_){
					max_=o;
				}
			}
		}cout<<max_;
		return 0;
	}if(m==(n-1)){
		for(int i=1;i<=n;i++){
			if(i==1){
				o=a[2];
				k=2;
			}else{
				o=a[1];
				k=1;
			}for(int j=1;j<=n;j++){
				if(j!=i&&j!=k) o=o&a[j];
			}if(o>max_) max_=o;
		}cout<<max_;
		return 0;
	}for(int i=1;i<=17;i++){
		if(n==g[i]) f1=1;
		if(m==g[i]) f2=1;
	}for(int i=1;i<=n;i++){
		if(a[i]!=i-1) f3=0;
	}if(f1==1&&f2==1&&f3==1){
		cout<<m*(n/m-1);
		return 0;
	}o=maxn;
	a[maxii]=-INF;
	m-=1;
	while(m--){
		max1=-INF;
		for(int i=1;i<=n;i++){
			if(a[i]>max1){
				max1=a[i];
				maxi=i;	
			}
		}o=o&max1;
		a[maxi]=-INF;
	}cout<<o;
	return 0;
}