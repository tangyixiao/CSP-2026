#include<bits/stdc++.h>
using namespace std;
long long n,ans,num=1;
char a[200005],c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		char b;
		cin>>x>>b;
		for(int j=num;x>=1;x--,j++){
			a[j]=b;
			c[j]=a[j];
			num++;
		} 
	}
	for(int i=1;i<=num/2;i++){
		if(a[i]!=c[num-i]){
			ans++;
		}
	}cout<<ans;
	return 0;
} 
