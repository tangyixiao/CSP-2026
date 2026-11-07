#include<bits/stdc++.h>
using namespace std;




int main()
{
	int ra,xa;
	string rb,xb;
	cin>>ra>>rb>>xa>>xb;
	int  shifou=0;
	if(ra==xa){//第一个问题 
		cout<<1;
		shifou=1;
	}
	else{
		cout<<0<<0<<0<<0;
		return 0;
		
	}
	
	//第二个问题 
	if(rb[1]==xb[1] && rb[0]==xb[0] &&shifou==1){
		shifou=1;
		cout<<1;
	}
	else{
		cout<<0<<0<<0;
		return 0;
	}
	cout<<0<<0;
	
	
}
