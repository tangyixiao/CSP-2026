#include<bits/stdc++.h>
using namespace std;
long long n,t,cnt,z,ans;
char a[100000005],b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t>>b; 
		for(int j=1;j<=t;j++){
			a[j+cnt]=b;
		}
		cnt+=t;
	}
	for(int i=1,j=cnt;i<=cnt/2&&j>=cnt/2;i++,j--){
		if(a[i]!=a[j])ans+=1;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
