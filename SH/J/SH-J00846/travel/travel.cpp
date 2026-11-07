#include<iostream>
using namespace std;
string c1,s1,c2,s2;
bool qwe(int a,int b){
	if(a==65){
		if(b==66){
			return false;
		}
		if(b==67){
			return false;
		}
		return true;
	}
	if(a==66){
		if(b==65){
			return false;
		}
		if(b==67){
			return false;
		}
		return true;
	}
	if(a==67){
		if(b==66){
			return false;
		}
		if(b==65){
			return false;
		}
		return true;
	}
	if(a==68){
		if(b==69){
			return false;
		}
		return true;
	}
	if(a==69){
		if(b==68){
			return false;
		}
		return true;
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int n1,n2,x1,x2,y1,y2;
	n1=(c1[0]-'0')*10+(c1[1]-'0');
	n2=(c2[0]-'0')*10+(c2[1]-'0');
	x1=(s1[0]-'0')*10+(s1[1]-'0');
	x2=(s2[0]-'0')*10+(s2[1]-'0');
	y1=s1[2];
	y2=s2[2];
	if(n1!=n2){
		cout<<"0000"<<endl;
	}else if(x1!=x2){
		cout<<"1000"<<endl;
	}else if(qwe(y1,y2)){
		cout<<"1100"<<endl;
	}else{
		if((y1-y2)==1||(y2-y1)==1){
			cout<<"1111"<<endl;
		}else{
			cout<<"1110"<<endl;
		}
	}
	return 0;
}
