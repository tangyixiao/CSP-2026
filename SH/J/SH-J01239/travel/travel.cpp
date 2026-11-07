#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<cmath>
std::string c1,c2,c3,c4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	std::cin>>c1>>c2>>c3>>c4;
	int c=c1[1]-'0'+(c1[0]-'0')*10,d=c3[1]-'0'+(c3[0]-'0')*10;
	if(c==d){
		std::cout<<"1";
		int a=0,b=0;
		a=(c2[0]-'0')*10+(c2[1]-'0');
		b=(c4[0]-'0')*10+(c4[1]-'0');
		if(a==b){
			std::cout<<"1";
			if((c2[2]>='A'&&c2[2]<='C'&&c4[2]>='A'&&c4[2]<='C')||(c2[2]>='D'&&c2[2]<='F'&&c4[2]>='D'&&c4[2]<='F')){
				std::cout<<"1";
				if(std::abs(c2[2]-c4[2])==1){
					std::cout<<"1"<<std::endl;
				}
				else{
					std::cout<<"0"<<std::endl;
				}
			}
			else{
				std::cout<<"00"<<std::endl;
				}
			}
		else{
			std::cout<<"000"<<std::endl;
		}
	}
	else{
		std::cout<<"0000"<<std::endl;
	}
	return 0;
} 
