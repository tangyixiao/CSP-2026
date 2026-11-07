#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long m,n,s=0,h;
	string b="";
	cin>>n>>m;
	long long a[n],c[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		h=a[i];
		while(a>0){
			s++;
			a[i]/=2;
		}
		while(a>0){
			b[i]=h%2+'0';
			s--;			
		}
		
	}
	
	return 0;
}
