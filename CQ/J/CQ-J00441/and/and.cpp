#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,sum=0;
	cin>>n>>m;
	vector<long long>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	if(m==1){
		cout<<a[n-1]<<endl;
		return 0;
	} 
	if(m==2){
		for(long long i=0;i<n-1;i++){
			for(long long j=i+1;j<n;j++){
				sum=max(sum,a[i]&a[j]);
			}
		}
		cout<<sum<<endl;
		return 0;
	}
	sum=a[n-1];
	for(long long i=n-1;i>=n-m;i--){
		sum=sum&a[i];
	}
	cout<<sum<<endl;
	return 0;
}
