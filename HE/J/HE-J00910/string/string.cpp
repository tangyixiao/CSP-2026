#include<bits/stdc++.h>
using namespace std;
long long n,num=0,cs=0;
string b,q,h;
char a[100000005];
long long m[100000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m[i]>>a[i];
		for(int j=0;j<m[i];j++){
			b+=a[i];
		}
		num+=m[i];
	}
	for(int i=0;i<num/2;i++){
		q+=b[i];
	}for(int i=num-1;i>=num-num/2;i--){
		h+=b[i];
	}
	if(q!=h){
		for(int i=0;i<num/2;i++){
			if(q[i]!=h[i]){
				cs++;
			}
		}
	}else{
		cout<<0;
		return 0;
	}
	cout<<cs;	
	return 0;
}
