#include<bits/stdc++.h>
using namespace std;
char a[1000000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,s=0,k=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int m;
		cin>>m;
		char l;
		cin>>l;
		for(int j=1;j<=m;j++){
		    k++;
			a[k]=l;
			
		}
	}
	for(int i=1;i<=(k+1)/2;i++){
		if(a[i]!=a[k+1-i]){
			s++;
		}
	}
	cout<<s;
	return 0;
}
