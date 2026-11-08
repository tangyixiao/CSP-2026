#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b,c,d;
	char c1,c2;
	cin>>a>>b>>c1>>c>>d>>c2;
	if(a==c)cout<<1;
		else{
			cout<<0<<0<<0<<0;
			return 0;
		}
	if(b==d)cout<<1;
		else{
			cout<<0<<0<<0;
			return 0;
		}
	if((c1<='C'&&c2<='C')||(c1>'C'&&c2>'C')){
		cout<<1;
		if(c1+1==c2||c1-1==c2){
			cout<<1;
		}else{
			cout<<0;
		}
	}else{ 
		cout<<0;
		cout<<0;
	}

	
	
	
	return 0;
}
