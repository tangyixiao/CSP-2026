#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r","stdin");
	freopen("string.out","w","stdout");
    string a;
    long long u=0;
    long long n,b[200009];
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>b[i];
    	cin>>a[i];
	}
	for(int i=1;i<=n/2;i++){
		for(int j=n;j>=n/2;j--){
			if(b[i]!=b[j]&&a[i]!=a[j]||a[i]!=a[j]){
				u+=b[i];
			}
		}
	}
	cout<<u; 
	return 0;
} 
