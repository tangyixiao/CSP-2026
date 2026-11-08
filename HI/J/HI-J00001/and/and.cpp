#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long a[N];
long long ma;
int n,m;
long long sum;
bool k=true;
bool cmp(int a,int b){
	return a>b;
}
bool f(long long a){
	for(int i=1;i<=30;i++){
		long long u=pow(2,i);
		if(u==a) return false;
	}
	
	return true;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ma=max(ma,a[i]);
	}
	
	if(m==1){//5分 
		cout<<ma;
		return 0;
	}
	
	if(m==2){//15分 
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				long long u=a[i]&a[j];
				sum=max(sum,u);
			}
		}
		
		cout<<sum;
		return 0;
	}
	
	if(m==n){//5分 
		
		sum=a[1];
		
		for(int i=2;i<=n;i++){
			sum=sum&a[i];
		}
		
		cout<<sum;
		return 0;
	}
	
	sort(a+1,a+n+1,cmp);
	
	for(int i=1;i<=m;i++){
		if(f(a[i])){//不是2的冥数 
			if(k){
				k=false;
				sum=a[i];
			}else{
				sum=sum&a[i];
			}
		}
	}
	
	cout<<sum;
	
	
	
	
	



	return 0;
}




