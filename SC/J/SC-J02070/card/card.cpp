#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1000000];
string b[1000000];
int main(){
	freopen("and.in","",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		int j=0;
		while(a[i]>0){
			j++;
			if(a[i]%(2^j)/(2^(j-1))==1)b[i]+='1';
			else b[i]+='0';
			a[i]-=a[i]%(2^j);
		}
		cout<<b[i]<<" ";
	}
	
	return 0;
} 
