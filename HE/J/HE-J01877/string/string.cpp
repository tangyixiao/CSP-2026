#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string S,X,b;
	int n;
	long long a[200005],d=0,e=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		for(int c=0;c<a[i];c++){
			S+=b[i];
			d++;
		}
	}
	for(int i1=n;i1>=0;i1--){
		for(int c1=a[i1];c1>0;c1--){
			X+=b[i1];
		}
	}
	for(int i2=0;i2<d;i2++){
		if(S[i2]!=X[i2]){
			e++;
		}
	}
	cout<<e/2;
	return 0;
}
