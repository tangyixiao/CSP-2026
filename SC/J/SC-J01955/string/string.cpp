#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0);
	int n;cin>>n;
	long long ans=0;
	vector<int>A(n);
	vector<char>B(n);
	for(int i=0;i<n;i++){
		cin>>A[i]>>B[i];
		if(i>0&&B[i-1]==B[i])continue;
		else if(i>0)ans=1;
	}
	if(ans==0){
		cout<<ans;
		return 0;
	}
	ans=0;
	int l=0,r=n-1;
	for(int i=0;i<n/2;i++){
		if(B[l]==B[r]&&A[l]==A[r])continue;
		if(B[l]==B[r]&&A[l]!=A[r]){
			ans+=abs(A[l]-A[r]);
			if(A[l]>A[r])A[r-1]-=A[l]-A[r],A[r]=A[l];
		}
		else if(A[l]==A[r]&&B[l]!=B[r]){
			ans+=A[l];
			B[r]=B[l];
		}
		else if(A[l]!=A[r]&&B[l]!=B[r]){
			ans+=max(A[l],A[r]);
			if(A[l]>A[r])A[r-1]-=A[l]-A[r],A[r]=A[l],B[r]=B[l];
			else A[l+1]-=A[r]-A[l],A[l]=A[r],B[l]=B[r];
		}
		l++,r--;
	}
	cout<<ans;
	return 0;
}