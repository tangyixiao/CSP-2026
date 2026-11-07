#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long num[20001]={};
	long long n,m;
	cin>>n>>m;
 
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	sort(num,num+n);
	long long ans=num[n-1];
	
	for(int i=n-1;i>=n-m;i--){
		ans=ans&num[i];
	}
	cout<<ans;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
