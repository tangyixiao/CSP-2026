#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[1000000005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int max=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>max){
			max=a[i];
		}
	}
	cout<<max;
	return 0;
}
