#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long ans=0;
	string b;
	int n;
	int a[300000];
	cin>>n;
	int left=0,right=n-1;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}
	while(left<=right){
		if(b[left]!=b[right]){
			ans+=min(a[left],a[right]);
		}
		left++;
		right--;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
