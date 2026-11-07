#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a[101],c[101];
	int sum=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
 for(int i=1;i<=n;i++){
	if(a[i]==a[n-i+1]||c[i]==c[n-i+1]){
		sum+=0;
		}
		else{
			sum++;
		}
	}
	cout<<sum;
	return 0;
}