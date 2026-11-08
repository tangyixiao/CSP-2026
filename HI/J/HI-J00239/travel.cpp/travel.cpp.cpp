#include<bits/stdc++.h>
using namespace std;
int a[18][19];
int main()
{
	freopen("travel,in","r",stdin);
	freopen("travel,out","w",stdout);
	
	char c1,z1,c2,z2,ant=0;
	cin>>c1>>z1>>c2>>z2;
	if(c1==c2 || z1==z2 || 'A'||'B'&&'B'||'C'&&'D'||'F'){
		cout<<"1111";
	}else if(c1==c2 || z1==z2 || 'A'||'C'){
		cout<<"1110";
	}else if(c1==c2 || z1==z2 || 'A'&&'B'&&'C'||'D'&&'F'){
		cout<<"1100";
	}else if(c1==c2 || z1!=z2){
		cout<<"1000";
	}else if(c1!=c2){
		cout<<"0000";
	}
	cout<<ant;
	return 0;
}
