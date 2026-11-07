#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int x=int(c1[0]-'0')*10+int(c1[1]-'0');
	int y=int(c2[0]-'0')*10+int(c2[1]-'0');
	if(x==y){
		cout<<1;
		int w=int(s1[0]-'0')*10+int(s1[1]-'0');
		int u=int(s2[0]-'0')*10+int(s2[1]-'0');
		//cout<<s1[0]<<"	"<<s1[1]<<endl;
		if(w==u){
			cout<<1;
			int q=int(s1[2]-'A');
			int p=int(s2[2]-'A');
			if((p<=2&&q<=2)||(p>2&&q>2)){
				cout<<1;
				if(p-q==1||p-q==1)cout<<1;
				else cout<<"0";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}
