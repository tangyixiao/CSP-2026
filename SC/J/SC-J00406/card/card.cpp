#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005];
int num1,num2;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		cout<<n;
		return 0;
	}
	if(a[n]==1){
		num1=n;
		num2=0;
	}else{
		num2=n;
		num1=0;
	}
	for(int i=n-1;i>=1;i--){
		if(a[i]==((a[n]==1)?2:1)){
			((a[n]==1)?num2:num1)++;
		}else break;
	}
	cout<<num1<<" "<<num2;
	return 0;
}