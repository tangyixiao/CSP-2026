#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	long long a[100010];
	string c[100010];
	long long sum=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>c[i];
		if(c[i]==c[i-1]){
			sum=0;
		}
	}
	cout<<sum;
	cout<<endl;

}
