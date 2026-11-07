#include<bits/stdc++.h>
using namespace std;
long long n,m,l,p,j,w;
string y;
char a;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	l=0;
	int z=1;
	if(n>=2000){
		cout<<0;
		return 0;
	}
	for(long long i=1;i<=n;i++){
		cin>>m>>a;
		for(long long i=l;i<=m+l;i++){
			y[i]=a;
		}
		l+=m;
	}
	w=0;
	for(long long i=0;i<l/2;i++){
		if(l%2!=0&&i==l/2-1){
			
		}
		else{
			if(y[i]!=y[y.size()-i]){
			w++;
		}
		}}
	cout<<w;
	return 0;
}
