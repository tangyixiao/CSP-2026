#include<iostream>
using namespace std;
struct node{
	long long n;
	char w;
}arr[200005];
char f(long long n,int all){
	long long cnt=0;
	for(int i=1;i<=all;i++){
		cnt+=arr[i].n;
		if(n<=cnt)return arr[i].w;
	}
	return 0;
}
char q(long long n,int all){
	long long cnt=0;
	for(int i=all;i>=1;i--){
		cnt+=arr[i].n;
		if(n<=cnt)return arr[i].w;
	}
	return 0;
}
int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>arr[i].n>>arr[i].w;
	long long add=0,ans=0;
	for(int i=1;i<=n;i++)add+=arr[i].n;
	for(long long i=1;i<=add/2;i++){
		if(f(i,n)!=q(i,n))ans++;
	}
	cout<<ans;
	return 0;
}