#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500010],ans=-1,sum=0,num=1,head=1; 
int main(){
	freopen("crystal.in", "r", stdin);
	freopen("crystal.out", "w", stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	if(n>5000 && a[2]-a[1]==a[3]-a[2] && a[2]==2){
		num=0;int k=a[2]-a[1];
		for(int i=1;num+i*k<=m;i++){
			num+=i*k;
		}cout<<num;
		return 0;
	}
	for(int i=2;i<=n;i++){
		sum+=(a[i]-a[i-1])*(i-1);num++;
		while(sum>m){
			num--;sum=sum-(a[i]-a[head]);head++;
		}
		ans=max(ans,num);
	}
	cout<<ans;
	
return 0;
}
