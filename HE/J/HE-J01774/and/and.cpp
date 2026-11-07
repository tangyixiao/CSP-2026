#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>a>>b>>c;
	if(a>c){
		cout<<a*3;
	}else{
		cout<<b*2+1;
	}
	return 0;
} 


