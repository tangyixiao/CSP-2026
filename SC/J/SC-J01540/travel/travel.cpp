#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string a,b,c,d;
	cin >>a>>b>>c>>d;
	if(a==c){
		cout <<1;
	}
	else cout <<0; 
	string f,g;
    char h,s;
    for(int i=0;i<2;i++){
    	f+=b[i];
    	g+=d[i];
	}
	h=b[2];
	s=d[2];
	if(f==g&&a==c){
		cout <<1;
	}
	else cout <<0;
	if(((h<='C'&&s<='C')||(h>'C'&&s>'C'))&&f==g&&a==c)cout <<1;
	else cout <<0;
	if(((h<='C'&&s<='C'&&abs(int(h)-int(s))==1)||(h>'C'&&s>'C'&&abs(int(h)-int(s))==1))&&f==g&&a==c)cout <<1;
	else cout <<0;
	return 0;
} 