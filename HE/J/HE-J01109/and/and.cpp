#include <iostream>
#include<cmath>
using namespace std;
const int L=2*10e5+100;
long long a[L];
int m,n;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		cin>>a[i];
	}
	long long ans=0;
	if(n==1){
		for(int i=1;i<=m;i++){
			ans=max(ans,a[i]);
		}
		cout<<ans;
		return 0;
	}
	if(n==2){
		ans=0;
		for(int i=1;i<m;i++){
			for(int j=i+1;j<=m;j++){
				long long sum;
				 sum=a[i]&a[j];
				ans=max(ans,sum);
			}
		}
		cout<<ans;
		return 0;
	}
	if(n==m){
		for(int i=1;i<=m;i++){
			ans|=a[i];
		}
		cout<<ans;
		return 0;
	}
	if(n==m-1){
		long long sum1=0,sum2=0;
		for(int i=1;i<=m-1;i++){
			sum1|=a[i];
		}
		for(int i=2;i<=m;i++){
			sum2|=a[i];
		}
		ans=max(sum1,sum2);
		cout<<ans;
		return 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
