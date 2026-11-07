#include <bits/stdc++.h>

using namespace std;
int main()

{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char shuru[1],shuru2[2],shuru3[3],shuru4[4];
	string ifss;
	
	cin>>shuru>>shuru2>>shuru3>>shuru4;
	if (shuru[0]==shuru3[0]&&shuru[1]==shuru3[1]){
		ifss=ifss+'1';
			if(shuru2[0]==shuru4[0]&&shuru2[1]==shuru4[1]){
				ifss=ifss+'1';
				if((shuru2[2]=='A'&&shuru4[2]=='B')||(shuru2[2]=='A'&&shuru4[2]=='C')||(shuru2[2]=='B'&&shuru4[2]=='A')||(shuru2[2]=='B'&&shuru4[2]=='C')||(shuru2[2]=='C'&&shuru4[2]=='A')||(shuru2[2]=='C'&&shuru4[2]=='B')||(shuru2[2]=='D'&&shuru4[2]=='F')||(shuru2[2]=='F'&&shuru4[2]=='D')){
					ifss=ifss+'1';
					if((shuru2[2]=='A'&&shuru4[2]=='B')||(shuru2[2]=='B'&&shuru4[2]=='C')||(shuru2[2]=='D'&&shuru4[2]=='F')||(shuru2[2]=='B'&&shuru4[2]=='A')||(shuru2[2]=='C'&&shuru4[2]=='B')||(shuru2[2]=='F'&&shuru4[2]=='D')){
						ifss=ifss+'1';
					}else{
						ifss=ifss+'0';
					
					}
				}else{
					ifss=ifss+'0';
					if((shuru2[2]=='A'&&shuru4[2]=='B')&&(shuru2[2]=='B'&&shuru4[2]=='C')&&(shuru2[2]=='D'&&shuru4[2]=='F')&&(shuru2[2]=='B'&&shuru4[2]=='A')&&(shuru2[2]=='C'&&shuru4[2]=='B')&&(shuru2[2]=='F'&&shuru4[2]=='D'))
					{
						ifss=ifss+'1';
					}else{
						ifss=ifss+'0';
					}
				}
				}else{
					ifss=ifss+'0';
					ifss=ifss+'0';
					ifss=ifss+'0';
				}
	}else{
		ifss=ifss+'0';
		ifss=ifss+'0';
		ifss=ifss+'0';
		ifss=ifss+'0';
		
	}

	//cout<<shuru<<shuru2<<shuru3<<shuru4;
	cout<<ifss; 
	return 0;
}
