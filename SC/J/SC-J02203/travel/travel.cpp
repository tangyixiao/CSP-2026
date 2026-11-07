#include<bits/stdc++.h>
using namespace std;
int r1,x1;
char m[10]={'A','B','C','D','E'};
int main()
{
	int r2,x2;
	char r3,x3;
	cin>>r1>>r2>>r3>>x1>>x2>>x3;
	if(r1==x1)cout<<1;
	else cout<<0;//first
	
	if(r2==x2)cout<<1;
	else cout<<0;//second
	
	if(r3==m[4]&&x3==m[5]||r3==m[5]&&x3==m[4])cout<<11;
	else{
		if(abs(r3-x3)==1)cout<<11;
		else cout<<10;
	}
}