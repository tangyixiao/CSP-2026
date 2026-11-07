#include<bits/stdc++.h>
using namespace std;
int n,m;
int ppt[32]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824};
long long a[100100],b[100100][35];
void zh(int x,int y){
	for(int i=30;i>=0;i--){
		if(ppt[i]<x){
			x-=ppt[i];
			b[y][i]=1;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		zh(a[i],i);
	}
	if(m==1){
		cout<<a[n];
		return 0;
	}
	if(m==2){
		int maxn=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				int g=a[i]&a[j];
				maxn=max(maxn,g);
			}
		}
		cout<<maxn;
		return 0;
	}
	return 0;
} 
