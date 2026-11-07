#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2,cc1,cc2;
	char s1,s2;
	cin>>c1>>cc1>>s1>>c2>>cc2>>s2;
	//cout<<c1<<" "<<cc1<<" "<<s1<<"\n"<<c2<<" "<<cc2<<" "<<s2;
	if(c1==c2){
		cout<<1;
	}else{
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
		return 0;
	}
	if(cc1==cc2){
		cout<<1;
	}else{
		cout<<0;
		cout<<0;
		cout<<0;
		return 0;
	}
	if((s1>='A'&&s1<='C'&&s2>='A'&&s2<='C')||(s1>='D'&&s1<='F'&&s2>='D'&&s2<='F')){
		cout<<1;
		if(s1+1==s2||s1-1==s2){
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