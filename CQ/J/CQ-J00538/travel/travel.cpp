#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int t1,t2;
bool f1,f2,f3,f4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) f1=1;
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&f1) f2=1;
	if(s1[2]>='A'&&s1[2]<='C') t1++;
	else t2++;
	if(s2[2]>='A'&&s2[2]<='C') t1++;
	else t2++;
	if((t1==2||t2==2)&&f2) f3=1;
	if((s1[2]+1==s2[2]||s1[2]-1==s2[2])&&f3) f4=1;
	cout<<f1<<f2<<f3<<f4;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
