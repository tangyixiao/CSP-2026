#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long a,b,s;
	char c,c2;
	for(int i=1;i<=n;i++){
		cin>>a;
		cin>>c;
		s+=a;
		if(i!=1 && c==c2){
			b=0;
		}
		else if(i!=1 && c!=c2) 
			b=1;
		c2=c;
	}
	if(b==0){
		cout<<0<<endl;
	}
	else
		cout<<s/2<<endl;
	return 0;	
} 
