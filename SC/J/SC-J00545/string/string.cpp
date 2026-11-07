#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long sum[20005]={};//数据开回来 
	long long startPos[20005]={};
	int n;
	long long len=0;
	cin>>n;
	int a[100005]={};
	char b[100005]={};
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>b[i];
		len+=a[i];
	}
	sum[1]=a[1];
	int testk=2;
	for(int i=1;i<=n;i++){
		sum[i]=a[i]+sum[i-1];
		startPos[i]=sum[i]-a[i]+1;
	}
	startPos[n+1]=1000000005;
	int ans=0;
	for(int i=1;i<=len/2;i++){
		int num=len-i+1;
		int left;
		int right;
		for(int j=1;j<=n;j++){
			if(startPos[j]>i){
				left=j-1;
				break;
			}
		}
		for(int j=1;j<=n+1;j++){
			if(startPos[j]>num){
				right=j-1;
				break;
			}
		}
		if(b[left]!=b[right]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}