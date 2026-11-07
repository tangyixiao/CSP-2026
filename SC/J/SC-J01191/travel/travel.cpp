#include<bits/stdc++.h>
using namespace std;
int c1,s1,c2,s2;//a,b,c,d;
char a,b;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%d%d%c%d%d%c",&c1,&s1,&a,&c2,&s2,&b);
	//cout<<a<<","<<b<<endl;
	//cout<<c1<<" "<<s1<<","<<a<<" "<<c2<<" "<<s2<<","<<b<<endl;
//	if(a) c1=a*10+c1;
//	if(b) s1=b*10+s1;
//	if(c) c2=c*10+c2;
//	if(d) s2=d*10+s2;
	if(c1!=c2){cout<<"0000";return 0;}
	else cout<<1;
	if(s1!=s2){cout<<"000";return 0;}
	else{
		cout<<1;
		if((a=='D'&&b=='F')||(a=='F'&&b=='D')||(a=='A'&&b=='B')||(a=='A'&&b=='C')||(a=='B'&&b=='A')||(a=='B'&&b=='C')||(a=='C'&&b=='A')||(a=='C'&&b=='B')){
			cout<<1;
			if((a=='D'&&b=='F')||(a=='F'&&b=='D')||(a=='A'&&b=='B')||(a=='B'&&b=='A')||(a=='B'&&b=='C')||(a=='C'&&b=='B')){cout<<1;return 0;}
			else{cout<<0;return 0;}
		}
		else{cout<<"00";return 0;}
	}
	fclose(stdin),fclose(stdout);
	return 0;
}