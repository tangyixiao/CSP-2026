#include<bits/stdc++.h>
using namespace std;
string c,s;
long long a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,l=0,g=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		l+=a[i];
		char d;
		cin>>d;
		for(int j=1;j<=a[i];j++){
			s+=d;
		}
		c+=d;
	}
	for(int i=0,j=n;i<=j;i++,j--){
		if(s[i]!=s[j]){
			g++;
		}
	}
	cout<<g;
	return  0;
}