#include<iostream>
using namespace std;
int main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	int c1,s1,c2,s2;
	char a1,a2;
	cin>>c1>>s1>>a1>>c2>>s2>>a2;
	cout<<(c1==c2);
	cout<<((c1==c2)&&(s1==s2));
	cout<<((c1==c2)&&(s1==s2)&&(a1>='D'&&a2>='D'||a1<'D'&&a2<'D'));
	cout<<((c1==c2)&&(s1==s2)&&(a1>='D'&&a2>='D'||a1<'D'&&a2<'D')&&((a1!='A'||a2!='C')&&(a1!='C'||a2!='A')));
	return 0;
} 
