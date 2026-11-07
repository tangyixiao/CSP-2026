#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	int x,y;
	char n,m;
	cin>>a>>x>>n>>b>>y>>m;
	//cerr<<a<<endl<<x<<n<<b<<y<<m;
	if(a==b) cout<<1;
	else{
		 cout<<"0000";
		 return 0;
	}
	if(x==y) cout<<1;
	else{
		 cout<<"000";
		 return 0;
	}
	if(n>='A'&&n<='C'&&m<='C'&&m>='A') cout<<1;
	else if(n>='D'&&n<='F'&&m<='F'&&m>='D') cout<<1;
	else{
		 cout<<"00";
		 return 0;
	}
	if(abs(n-m)==1){
		if(n=='C'&&m=='D') cout<<0;
		else if(n=='D'&&m=='C') cout<<0;
		else cout<<1<<endl;
	}
	else cout<<0;
	return 0;
	fclose(stdin);
	fclose(stdout);
}
