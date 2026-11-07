#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a[1000000000];
	int n;
	int ge;
	int cnt=0;
	cin>>n>>ge;
	for(int i=0;i<=n;i++){
		cin>>a[i];
	}
	for(int i=0;i<=n;i++){

		if(cnt<a[i]&a[i+1]){
			cnt=a[i]&a[i+1];
		}
		}
	cout<<n;
	return 0;
}
