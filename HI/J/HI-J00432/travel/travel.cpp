#include<bits/stdc++.h>
using namespace std;
string C[4];
int main(){
	freopen("travel.in","r","stdin");
	freopen("travel.out","w","stdout");
	char a='0',b='0',c='0',d='0';
	for(int i=0;i<4;i++){
		cin>>C[i];
	}
	if(C[0]==C[2]){
		a='1';
		if(C[1][0]==C[3][0] && C[1][1]==C[3][1]){
			b='1';
			if(C[1][2]>='A' && C[1][2]<='C' && C[3][2]>='A' && C[3][2]<='C' || C[1][2]>='D' && C[1][2]<='F' && C[3][2]>='D' && C[3][2]<='F'){
				c='1';
				if(C[1][2]==char(C[3][2]+1) || C[1][2]==char(C[3][2]-1) || C[1][2]=='D' && C[3][2]=='F' || C[1][2]=='F' && C[3][2]=='D')
					d='1';
		}
	}
}
	cout<<a<<b<<c<<d;	
	
	return 0;
}
