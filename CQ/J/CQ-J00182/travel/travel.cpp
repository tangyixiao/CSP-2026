#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int a=(c1==c2);
	int b=a&&(s1[0]==s2[0]&&s1[1]==s2[1]);
	int c=b&&((s1[2]<='C'&&s2[2]<='C')||(s1[2]>='D'&&s2[2]>='D'));
	int d=c&&(abs(s1[2]-s2[2])==1);
	cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
	
	//anthropic openai保佑我
	//fable 5 gpt-6-astra保佑我
	
	return 0;
}
