#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,maxnn=0,re=0;
long long a[N];
int e[35]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824};
long long yu(long long x,long long y){
	re=0;
	for(int i=30;i>=0;i--){
		if(x-e[i]>=0 and y-e[i]>=0){
			re+=e[i];
		}
		if(x-e[i]>=0) x-=e[i];
		if(y-e[i]>=0) y-=e[i];
	}
	return re;
}
void d(int pos,int num,int ans){
	if(num>m){
		if(ans>maxnn) maxnn=ans;
		return;
	}
	if(pos>n) return;
	d(pos+1,num,ans);//buxuan
	d(pos+1,num+1,yu(ans,a[pos]));
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	d(1,0,2147483647);
	cout<<maxnn;
	return 0;
} 
