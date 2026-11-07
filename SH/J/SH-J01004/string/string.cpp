#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],sum;
char b[200005];
string c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>b[i];
		for(int j=1;j<=a[i];j++){
			c+=b[i];
		}
	}
	for(int i=0,j=c.size()-1;i!=j;i++,j--){
		if(c[i]!=c[j]){
			sum++;
		}
	}
	cout<<sum;
}
