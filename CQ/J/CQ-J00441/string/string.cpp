#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a,l,r;
	long long sum=0;
	char c;
	cin>>n;
	vector<int>a0;
	vector<char>c0;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		a0.push_back(a);
		c0.push_back(c);
	}
	l=0,r=n-1;
	while(l<=r){
		if(c0[l]==c0[r]){
			if(a0[l]>a0[r]){
				a0[l]-=a0[r];
				r--;
			}
			else if(a0[l]==a0[r]){
				a0[l]=0;
				a0[r]=0;
				l++;
				r--;
			}
			else{
				a0[r]-=a0[l];
				l++;
			}
		}
		else{
			if(a0[l]>a0[r]){
				a0[l]-=a0[r];
				sum+=a0[r];
				r--;
			}
			else if(a0[l]==a0[r]){
				sum+=a0[r];
				a0[l]=0;
				a0[r]=0;
				l++;
				r--;
			}
			else{
				a0[r]-=a0[l];
				sum+=a0[l];
				l++;
			}
		}
	}
	cout<<sum<<endl;
	return 0;
}
