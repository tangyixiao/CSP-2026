#include<bits/stdc++.h>
using namespace std;
int main(){
	char c;
	string x;
	int n,a,sum=0,ans=0;
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			x+=c;
			sum++;
		}
	}
	sum=sum-1;
	for(int i=0,j=sum;i<sum,j>1;i++,j--){
		if(x[i]!=x[j]){
			ans++;
		}
		if(i==j||i+1==j){
			break;
		}
	}
	cout<<ans;
	return 0;
}  
