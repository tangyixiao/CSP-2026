#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,c3,c4,x,y;
	cin>>c1;
	cin>>c2;
	cin>>c3;
	cin>>c4;
	int a,b;
	if(c1[1]==c3[1]&&c1[2]==c3[2]){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}x=(c2[1]-'0')*10+(c2[2]-'0');y=(c4[1]-'0')*10+(c4[2]-'0');
	if(x==y){
		cout<<"1";
	}else{cout<<"000";return 0;
    }
	if(c2[3]=='A'||c2[3]=='B'||c2[3]=='C'){a=1;
	}
    else {a=2;}
    if(c4[3]=='A'||c4[3]=='B'||c4[3]=='C'){b=1;
	}
    else{b=2;}
    if(a==b){
    	cout<<"1";
	}else{cout<<"00";return 0;}
	
		if(c2[3]=='A'&&c4[3]=='B'||c2[3]=='B'&&c4[3]=='A'){
			cout<<1;
		}else if(c2[3]=='B'&&c4[3]=='C'||c2[3]=='C'&&c4[3]=='B'){
			cout<<1;
		}else if(c2[3]=='D'&&c4[3]=='F'||c2[3]=='F'&&c4[3]=='D'){
			cout<<"1";
		}else{
		cout<<"0";
	}
	return 0;
	
}
