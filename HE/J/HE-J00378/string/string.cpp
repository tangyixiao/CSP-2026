#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string a1,c1,a2,c2,a3,c3,a4,c4,a5,c5,a6,c6,a7,c7,a8,c8,a9,c9,a10,c10,s;
	long long n;
	cin>>n;
    if(n==1){
    	cin>>a1>>c1;
    	cout<<0;
	}
	if(n==2){
		cin>>a1>>c1;
		cin>>a2>>c2;
		if(c1!=c2){
		   cout<<a2;
		}else{
			cout<<0;
		}
	}
    return 0;
}
