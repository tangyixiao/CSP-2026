#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,l,lon=0,gai=0;
	string s="";
	char c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>l>>c;
		for(int j=0;j<l;j++){
			s+=c;
			lon++;
		}
	}
	
	for(int i=0;i<lon/2;i++){
		cout<<s[i]<<' '<<s[lon-i-1]<<endl;
		if(s[i]!=s[lon-i-1]){
			gai++;
		}
	}
	cout<<gai;
	return 0;
}
