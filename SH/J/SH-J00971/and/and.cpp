#include<bits/stdc++.h>
using namespace std;
long long arr[200010];
long long n,m,sum;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n,greater<long long>());
	sum=arr[0];
	int cnt=1;
	m--;
	while(m>0){
		for(long long i=cnt;m>0&&i<n;i++){
			if(sum&arr[i]==arr[i]){
				sum=sum&arr[i];
				m--;
				cnt=i+1;
			}
		}
		if(m){
			sum=sum&arr[cnt];
			m--;
			
		}
	}
	cout<<sum;
	return 0; 
}
