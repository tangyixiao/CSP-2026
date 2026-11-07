#include<bits/stdc++.h>
using namespace std;
long long int a[2010];
int mj[5];
int k[50],k1[50];
long long int awh(long long int x,long long int y){
	int i=0,j=0;
	memset(k,2,sizeof k);
	memset(k1,2,sizeof k1);
	while(x!=0){
		i++;
		k[i]=x%2;
		x/=2;
	}
	while(y!=0){
		j++;
		k1[j]=y%2;
		y/=2;
	}
	long long int set=1,sum1=0;
	for(int i=1;i<=50;i++){
		if(k[i]==k1[i] && k[i]==1) sum1+=set;
		set*=2;
	}
	return sum1;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,m,maxs=0;
	long long int sum=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>=maxs && a[i]<=4){
			maxs=a[i];
		}
	}
	if(maxs<=4 && n>2000){
		int ans=0;
		for(int i=1;i<=n;i++){
			mj[a[i]]++;
		}
		if(mj[4]>=2) ans=4;
		else if(mj[3]>=2) ans=3;
		else if(mj[2]>=2) ans=2;
		else if(mj[1]>=2) ans=1;
		else;
		cout<<ans;
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			long long int ans=awh(a[i],a[j]);
			if(sum<=ans) sum=ans;
		}
	}
	cout<<sum;
	return 0;
} 
