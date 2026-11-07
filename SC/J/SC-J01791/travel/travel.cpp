#include <bits/stdc++.h>
using namespace std;
string a,b,c,d,ans;
int flag=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>a>>b>>c>>d;
	if(a==c) ans+='1',flag++;
	else ans+='0';
	if(flag==1&&b[0]==d[0]&&b[1]==d[1]) ans+='1',flag++;
	else ans+='0';
	if(flag==2){
		if(b[2]>='D'&&b[2]<='F'&&d[2]>='D'&&d[2]<='F') ans+='1',flag++;
		else if(b[2]>='A'&&b[2]<='C'&&d[2]>='A'&&d[2]<='C') ans+='1',flag++;
		else ans+='0';
	}
	else ans+='0';
	if(flag==3){
		if(int(b[2])==int(d[2])+1||int(b[2])==int(d[2])-1) ans+='1';
		else ans+='0';
	}
	else ans+='0';
	for(int i=0;i<ans.size();i++) cout<<ans[i];
	cout<<endl;
	return 0;
}