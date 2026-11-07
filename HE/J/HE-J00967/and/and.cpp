#include<bits/stdc++.h>
using namespace std;
long long arr[100086];
int jie;
fun(int i,int j){
	jie+=arr[i]&=arr[j];
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	int max=-100086;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=i+m-1;j++){
			fun(i,j);
		}
		if(max<jie)max=jie;
		jie=0;
	}
	cout<<max;
	return 0;
}
//Trick||Treat!
