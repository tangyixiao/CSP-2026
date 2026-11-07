#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
string f,f2;
char s[N];
int main(){
	long long n,z;
	int h[N];
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>h[i]>>s[i];
		f+=h[i]*s[i];
	}
	for(int i=0;i<n;i++){
		for(int j=n;j>0;j--){
			if(f[j]==f[i]){
				z=1;
			}else{
				z=0;
			}
		}
	}
	if(z==1){
		cout<<0;
	}else{
		z=0;
		for(int i=0;i<n;i++){
			for(int j=n;j>n;j--){
				if(f[j]!=f[i]){
					z++;
				}
			}
		}
		cout<<z;
	}
	return 0;
}
