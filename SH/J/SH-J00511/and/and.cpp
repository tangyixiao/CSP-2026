#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	if(n==m){
		sum=pow(2,31)-1; 
		for(int i=1;i<=n;i++){
			int gg;
			cin>>gg;
			sum=sum&gg;
		}cout<<sum;
		return 0;
	}
	if(m==1){
		int max1=0;
		for(int i=1;i<=n;i++){
			int gg;
			cin>>gg;
			max1=max(gg,max1);
		}
		cout<<max1;
		return 0;
	}
	if(m==2&&n<=5000){
		int a[2005]={};
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}int max1=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				max1=max(max1,a[i]&a[j]);
			}
		}cout<<max1;
		return 0;
	}
	int erjin[35]={};
	for(int i=1;i<=n;i++){
		long long gg;
		cin>>gg;
		for(int j=31;j>=0;j--){
			long long c=pow(2,j);
			if(gg>=c){
				gg-=c;
				erjin[j+1]++;
			}
		}
	}
	for(int i=31;i>=0;i--){
		if(erjin[i]>=m){
			sum+=pow(2,i);
		}
	}cout<<sum;
}

