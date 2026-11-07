#include<bits/stdc++.h>
using namespace std;
char c1[2+10],c2[2+10];
char s1[3+10],s2[3+10];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	bool flag=1;
	for(int i=0;i<=1;i++){
		if(c1[i]-c2[i]!=0){
			flag=0;
		}
	}
	cout<<flag;
	if(flag==1){
		for(int i=0;i<=1;i++){
			if(s1[i]-s2[i]!=0){
				flag=0;
			}
		}
	}
	cout<<flag;
	if(flag==1){
		if((s1[2]<='C'&&s2[2]>'C')||(s1[2]>'C'&&s2[2]<='C')){
			flag=0;
		}
	}
	cout<<flag;
	if(flag==1){
		flag=1;
		if(s1[2]-s2[2]!=1&&s2[2]-s1[2]!=1){
			flag=0;
		}
	}
	cout<<flag;
	return 0;
}