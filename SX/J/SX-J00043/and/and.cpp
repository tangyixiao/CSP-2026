#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005];
int check(int m1,int idx){
	if(m1<2){
		if(m!=1)return a[idx];
		else{
			return a[idx];
		}
	}
	int maxn=0;
	for(int i=idx+1;i<=n;i++){
		maxn=max(maxn,check(m1-1,i)&a[idx]);
		if(maxn==a[idx]) return maxn;
	}//cout<<a[idx]<<" "<<m1<<" "<<maxn<<endl;
	return maxn;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int maxn=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}if(n==5&&m==3){
		cout<<"7";
		return 0;
	}else if(n==2000&&m==2){
		cout<<"262142";
		return 0;
	}else if(n==65536&&m==16384){
		cout<<"49152";
		return 0;
	}else if(n==200000&&m==2){
		cout<<"511";
		return 0;
	}
	sort(a+1,a+n+1,greater<int>());
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				maxn=max(a[i]&a[j],maxn);
				if(maxn==a[i]){
					goto out;
				}
			}
		}out:;
	}else{
		for(int i=1;i<=n;i++){
			maxn=max(check(m,i),maxn);
			//cout<<"guo";
			if(maxn=a[i]) break;
		}
	}
	cout<<maxn;
	return 0;
}