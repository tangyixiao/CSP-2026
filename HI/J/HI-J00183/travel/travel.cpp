#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string a[23];
	string b[23];
	cin >>n;
	//frecpen["travel"."r"stdin];
	//frecpen["travel"."w"stdout];
	int a1,a2,b1,b2;
	cin >>a1>>b1>>a2>>b2;
	for(int i=0;i<99;i++){
	if(a1=b1)
	{
	cout <<1;
	}else{
		cout << 0;
	}if(a[i]+a[i+1]==b[i]+b[i+1]){
		cout <<1;
	}else{
	cout<<0;
	}
}

	return 0;
}

