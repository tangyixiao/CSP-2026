#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,ma=-2e9,sum=0,h=0;
	cin>>n>>m;
	int a[200010];
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	for(long long i=1;i<=m;i++){
		ma=-2e9;
		for(int j=1;j<=n;j++){
			if(a[j]>ma){
				ma=a[j];
				h=j;
			}
		}
		if(i==1){
			sum=ma;
		}else{
			sum=sum&ma;
		}
		a[h]=-1;
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout); 
	return 0;
} 
