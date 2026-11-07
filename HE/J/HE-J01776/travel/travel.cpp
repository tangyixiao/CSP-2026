#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c) cout<<1;
	else{
		cout<<0<<0<<0<<0;
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	int flag=1;
	for(int i=0;i<2;i++){
		if(b[i]!=d[i]){
			flag=0;break;
		}
	}if(flag) cout<<1;
	else{
		cout<<0<<0<<0;
		fclose(stdin);
		fclose(stdout);
		return 0;
	} 
	char s1=b[2],s2=d[2];
	if((s1>='A'&&s1<='C'&&s2>='A'&&s2<='C')||(s1>='D'&&s1<='F'&&s2>='D'&&s2<='F')){
		cout<<1;
		if(abs(s1-s2)==1) cout<<1;
		else cout<<0;
	}else{
		cout<<0<<0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
