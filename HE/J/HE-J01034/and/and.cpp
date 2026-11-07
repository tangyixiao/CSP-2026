#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n;
	cin>>m>>n;
	int a[100007];
	for(int i=1;i<=m;i++){
		cin>>a[i];
		if(i==m){
			cout<<a[i];
		}
	}
	//0000000000000000000000000000001111111111111111111111110000000000000000001111111101010101010010 
	for(long long i=1;i<=100;i++){
		int k=0,k1=k;
		for(long long j=1;j<=i;j++){
			break;
			k+=k;
		}
		break;
	} 
	return 0;
}
