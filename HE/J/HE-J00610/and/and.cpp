#include<bits/stdc++.h>
using namespace std;
long long n,m,a[1000000],ans;
long long maxAnd(long long a0){
	long long ans1=-1,pos=-1;
	for(int i=0;i<n;i++){
		if((a0&a[i])>ans1){
			ans1=a0&a[i];
			pos=i;
		}
	}
	if(pos==-1){
		return 0;
	}else{
		a[pos]=0;
		return ans1;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n>>m;

	for(int i=0;i<n;i++){
		cin >> a[i];
		ans=max(a[i],ans);
	}
	//ans=a[0];
	for(int i=0;i<n;i++){
		if(ans==a[i]){
			a[i]=0;
			break;
		}
	}
	for(int i=0;i<m-1;i++){
		ans = maxAnd(ans);
	}
	cout <<ans;
	return 0;
} 
