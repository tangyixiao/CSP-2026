#include<bits/stdc++.h>
using namespace std;
long long a[200005],n,l,r,sum;
char b[200005];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		for(int j=0;j<a[i];j++)s+=b[i];
	}
	r=s.length()-1;
	while(l<r){
		if(s[l]!=s[r])sum++;
		l++;
		r--;
	}
	cout<<sum;
	return 0;
}