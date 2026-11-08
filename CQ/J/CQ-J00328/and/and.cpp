#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,m,a[300001],sum,maxn,maxb;
int cmp(int x,int y){
	return x>y;
}
int f(int x,int y){
	if(x==m){
		return a[y];
	}
	sum=(a[y]&a[y+1]);
	for(int i=y+2;i<=n;i++){
		sum=max(sum,sum&a[i]);
		f(x+1,i+1);
	}
	
	return sum;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin.tie(0);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>maxn){
			maxb=maxn;
			maxn=a[i];
		}else if(a[i]<=maxn&&a[i]>maxb){
			maxb=a[i];
		}
	}
	if(m==1){
		cout<<maxn;
		return 0;
	} 
	if(maxn==maxb&&m==2){
		cout<<maxn;
		return 0;
	}
	if(m==2){
		sort(a+1,a+n+1,cmp);
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n&&a[j]>sum;j++){
				sum=max(sum,a[i]&a[j]); 
			}
			if(a[i]<sum){
				break;
			}
		}
		cout<<sum;
		return 0;
	}
	sum=0;
	sort(a+1,a+n+1,cmp);
	int sum1=a[1];
	for(int i=2;i<=m;i++){
		sum1&=a[i];
	}
	cout<<sum1;
	return 0;
}

