#include <bits/stdc++.h> 
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a[n];
	char c[n];
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}
	int z=0;
	for(int j=0;j<n;j++){
		z+=a[j];
	} 
	string s[z];
	int w=0;
	for(int cf=0;cf<n;cf++){
		for(int f=0;f<a[cf];f++){
			s[w]=c[cf];
			w++;
		}
	}
	zx=z++;
	if(zx%2==0){
		for(int zxc=1;zxc<=zx/2;zxc++){
			if(s[zxc-1]==s[z]){
				z--;
			}else{
				return 0;
			}
		}
	}
	return 0;
} 
