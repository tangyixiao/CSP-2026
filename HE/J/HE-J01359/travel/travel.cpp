#include<bits/stdc++.h>
using namespace std;
struct cwh{
	char a;
	int b;
};
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
	int c1,c2;
	cwh s1,s2;
	int f=0;
	cin>>c1>>s1.b>>s1.a>>c2>>s2.b>>s2.a;
	int s11=s1.a-64,s22=s2.a-64;
	if(c1==c2){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(s1.b==s2.b && c1==c2){
		cout<<1;	
	}
	else{
		cout<<0;
	}
	if((s1.a>='A' && s2.a>='A' && s1.a<='C' && s2.a<='C' || s1.a>='D' && s2.a>='D' && s1.a<='F' && s2.a<='F') && s1.b==s2.b && c1==c2){
		cout<<1;
		f=1;
	}
	else{
		cout<<0;
	}
//	cout<<endl<<s11<<" "<<s22;
	if(f==1 && s1.b==s2.b && c1==c2 && (s11-s22==1 || s22-s11==1)){
		cout<<1;
	}
	else{
		cout<<0;
	}
//	cout<<c1<<endl;
//	cout<<c1<<" "<<s1.b<<" "<<s1.a<<" "<<c2<<" "<<s2.b<<" "<<s2.a<<" ";
//9.24
//Trick||Treat!
	return 0;
}
