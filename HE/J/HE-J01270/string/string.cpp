#include<bits/stdc++.h>
using namespace std;
string ce[1000000];
long long n,lence;
int cnt=0;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		long long a;
		char c;
		cin>>a>>c;
		for(int j=lence;j<=lence+a;j++){
			ce[j]=c;
			
		}
		lence+=a;
	}
	if(n==1){
		for(int i=1;i<=lence;i++){
			cout<<ce[i];
		}
	}
	else{
		for(int i=1;i<=lence;i++){
		long long l=i,r=lence+1-i;
		if(l==r)break;
		if(ce[l]!=ce[r]&&ce[l]==ce[l+1]){
			ce[r]=ce[l];
			cnt++;
		}
		else if(ce[l]!=ce[r]&&ce[r]==ce[r-1]){
			ce[l]=ce[r];
			cnt++;
			}
		}
		cout<<cnt<<'\n';
	
		
		
	}
	
	return 0;
}
