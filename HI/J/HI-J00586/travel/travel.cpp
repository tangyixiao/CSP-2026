#include<bits/stdc++.h>
using namespace std;
char a[10005];
char b[10005];
char c[10005];
char d[10005];
char zm[50]={'A','B','C','D','E','F'};
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	bool o=0;
	cin >> c1 >> s1 >> c2 >> s2;
	for(int i=0;i<s1.size();i++){
		a[i]=s1[i];
	}
	for(int i=0;i<c1.size();i++){
		b[i]=c1[i];
	}
	for(int i=0;i<s2.size();i++){
		c[i]=s2[i];
	}
	for(int i=0;i<c2.size();i++){
		d[i]=c2[i];
	}
	if(a[0]==b[0]&&a[1]==b[1]){
		o=1;
		cout << o;
	}
	else{
		o=0;
		cout  << o;
	}
	if(o==1&&c[2]==d[2]){
		o=1;
		cout << o;
	}
	else{
		o=0;
		cout << o;
	}
			
	if(o==1&&c[2]=='C'&&d[2]=='C'||o==1&&c[2]=='D'&&d[2]=='D'){
		o=1;
		cout << o;
	}
	else{
		o=0;
		cout  << o;
	}
		
	if((c[2]-0)-(d[2]-0)==1||(c[2]-0)-(d[2]-0)==-1){
		o=1;
		cout << o;
	}
	else{
		o=0;
		cout << o;
	}
	
	return 0;
}
