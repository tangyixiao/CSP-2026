#include<bits/stdc++.h>
using namespace std;
long long n,a[1e9+5],s[1e9+5];
char c; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			cin>>a[i]>>c[i];
			s[i]+=c[i];
			if(c[i]==c[i+1]){
				cout<<"0";
			}
		}
	}
	
	return 0;
}
