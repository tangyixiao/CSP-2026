#include<bits/stdc++.h>
using namespace std;
char a[1000000000];
int ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,x,sum=0;
	char y;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		cin>>y;
		for(int j=sum;j<sum+x;j++){
			a[j]=y;
		}
		sum+=x;
	}
	sum--;
	for(int i=0;i<=sum/2;i++){
		if(a[i]!=a[sum-i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
} 
