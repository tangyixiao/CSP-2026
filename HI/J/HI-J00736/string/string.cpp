#include<bits/stdc++.h>
using namespace std;

long long a[1000005];
int main( ){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s="";
	int nn;
	cin>>nn;
	for(int i=1;i<=nn;i++){
	    
	    	char b;
	    cin>>a[i]>>b;
	     s+=b;
	
	}
	int cnt=nn-1,sum=0,i=0;
	for(int i=1;i<=cnt;i++,	cnt--){
	
		if(s[i]!=s[cnt]){
		sum+=min(a[i],a[cnt]);
		
			
			
		}
	}
//	cout<<a;
	cout<<sum;
	return 0;
}
