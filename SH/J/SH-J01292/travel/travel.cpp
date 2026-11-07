#include<iostream>
#include<string> 
using namespace std;
string c1,s1,c2,s2;
bool an1,an2,an3,an4;
int main()
{
	//freopen{'travel','in',}
	//freopen{'travel','ans',}
	cin>>c1>>s1>>c2>>s2;
if((c1[0]==c2[0])&&(c1[1]==c2[1]))
{
	an1=1;
	if((s1[1]==s2[1])&&s2[0]==s1[0])
	{
		an2=1;
		int is1=(s1[2]-'A')/3;
		int is2=(s2[2]-'A')/3;
		if(is1==is2){
			an3=1;
			if(((s1[2]-s2[2])==1)||((s2[2]-s1[2])==1))an4=1;
		}
	}
}
		cout<<an1<<an2<<an3<<an4;
	
    return 0;
}
