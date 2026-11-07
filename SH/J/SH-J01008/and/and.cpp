#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d,e,f,g;
	cin>>a>>b>>c>>d>>e>>f>>g;
	cout<<max(c&d,max(c&e,max(c&f,max(c&g,d&e))))
	return 0;
}
