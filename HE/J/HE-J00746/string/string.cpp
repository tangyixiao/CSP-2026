#include<bits/stdc++.h>
using namespace std; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,m,cnt=0;
	char m1;
	string a;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m>>m1;
		for(int j=1;j<=m;j++){
			a+=m1;
		}
	}
	for(int i=0;i<a.size()/2;++i){
		int j=a.size()/2;
		if(a[i]!=a[j]){
			cnt++;
		}
		j--;
	}
	cout<<cnt;	
	return 0;
}
