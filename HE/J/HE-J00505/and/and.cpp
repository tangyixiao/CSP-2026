#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
int arr[maxn];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int maxn=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	int ans=arr[n-1];
	int cnt=0;
	for(int i=n-1;i>=n-m;i--){
		ans=ans&arr[i];
		cnt=arr[i];
	}
	if(ans==0){
		cout<<cnt;
	}else{
		cout<<ans;	
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
