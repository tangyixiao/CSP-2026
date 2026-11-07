#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,a,f;
string c; 
string s=" ";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int ii=1;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=ii;j<=ii+a-1;j++){
			s+=c;
		}
		if(i<n){
			ii+=a;
		}
		
	}
	int l=1,r=ii,cnt=0;
	if(ii%2==1){
		f=1;
	}
	while(l+f<r){
		if(s[l]!=s[r]){
			cnt++;
		}
		l++,r--;
	} 
	cout<<cnt;
	return 0;
}
