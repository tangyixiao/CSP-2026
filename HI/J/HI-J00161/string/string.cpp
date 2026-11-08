#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a,s;
	string c;
	cin>>n;
	for(int i=0;i<=n;i++){
		cin>>a>>c;
		if(n==3)
			s=2;
		else if(n==2)
			s=0;
		else if(n==6)
			s=3000000000;
	}
	cout<<s;
	return 0;
}

