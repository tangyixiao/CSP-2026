#include<bits/stdc++.h>
using namespace std;
string a[100000005],s;
long long k=0,m,n,cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m>>s;
		for(int i=1;i<=m;i++){
			k++;
			a[k]=s;
			
		}
	}
	//for(int i=1;i<=k;i++){
	//	cout<<a[i];
	//}
	for(int i=1;i<=k/2;i++){
		if(a[i]!=a[k-i+1]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}