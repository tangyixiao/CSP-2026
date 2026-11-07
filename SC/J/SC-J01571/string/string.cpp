#include<bits/stdc++.h>
using namespace std;
const int N=1e5+100;
string a;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,i,j,x,len=0;
	char y;
	cin>>n;
	a+='0';
	for(i=1;i<=n;i++){
		cin>>x>>y;
		len+=x;
		for(j=1;j<=x;j++){
			a+=y;	
		}
	}
	int z=len>>1,cnt=0;
	for(i=1;i<=z;i++){
		int l=i;
		int r=len-i+1;
		if(a[l]!=a[r]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
} 