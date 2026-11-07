#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>s1>>c1>>s2>>c2;
	bool o1,o2,o3,o4;
	o1=0;
	o2=0;
	o3=0;
	o4=0;
	
	if(s1==s2){
		o1=1;
	}
	if(s1==s2 && c1[0]==c2[0] && c1[1]==c2[1]){
		o2=1;
	}
	if(s2==s1 && c1[0]==c2[0] && c1[1]==c2[1] && ((c1[2]<='C' && c2[2]<='C') || (c1[2]>='D' && c2[2]>='D'))){
		o3=1;
	}
	if(s2==s1 && c1[0]==c2[0] && c1[1]==c2[1] && ((c1[2]<='C' && c2[2]<='C') || (c1[2]>='D' && c2[2]>='D'))){
		if(c1[2]<='C'){
			if(max(c1[2],c2[2])==char(min(c1[2],c2[2])+1)){
				o4=1;
			}
		}
		else{
			o4=1;
		}
	}
	string a="    ";
	a[0]=char(o1+'0');
	a[1]=char(o2+'0');
	a[2]=char(o3+'0');
	a[3]=char(o4+'0');
	cout<<a;
	return 0;
}
