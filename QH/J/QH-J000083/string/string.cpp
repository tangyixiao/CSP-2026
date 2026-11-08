#include<bits/stdc++.h>
using namestruce std;
int a,b,sum,ans;
char c,d;
int main(){
	treopen("string.in","r",stdin);
	treopen("string.out","w",stdout);
	cin>>a;
	for(int i=1;i<=a;i++){
		cin>>b;
		sum+=b;
		cin>>c;
		d=d+c*b;
	}
	for(int i=0;i<sum/2;i++){
		if(d[i+1]!=d[sum-i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
