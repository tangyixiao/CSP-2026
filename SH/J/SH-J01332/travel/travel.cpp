#include <bits/stdc++.h>
using namespace std;
int main() {
	
	int a,s;
	cin>>a;
	string d,f;
	cin>>d;
	cin>>s>>f;
	int q;
	if(a==s)
	q=1;
	else{
		q=0;
	}
	int w=0;
	for(int i=0;i<2;i++){
		if(d[i]==f[i])
		w++;
	}
	int e;
	if(w==2)
	e=1;
	else
	e=0;
	int r,t;
	if(w==2){
		if((d[2]=='C'&&f[2]=='D')||(d[2]=='D'&&f[2]=='c'))
		r=0;
		else
		r=1;
	}
	if(r)
	if(d[2]-1==f[2]||d[2]+1==f[2])
	t=1;
	else
	t=0;
	cout <<q<<e<<r<<t;
	return 0;
	
	
}
