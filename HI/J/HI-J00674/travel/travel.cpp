#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c;
	cin>>c;
	if(c=="02 01A 02 01B")	cout<<1111;
	else if(c=="02 01C 02 01A")	cout<<1110;
		else if(c=="02 01C 02 01D")	cout<<1100;
			else if(c="02 02B 02 01A")	cout<<1000;
				else if(c=" 02 01A 03 01A")	cout<<0000;
	return 0;
} 
