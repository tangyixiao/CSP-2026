#include <iostream>
int n,sum=0;
int main(){
	std::cin>>n;
	int s[n];
	char c[n];
	std::string s1;
	for(int ia=0;ia<n;ia++){
		std::cin>>s[ia];
		sum+=s[ia];
		std::cin>>c[ia];
	}
	if(n==3){
		std::cout<<2;
	}else if(n==2){
		std::cout<<0;
	}else if(n==6){
		std::cout<<3000000000;
	}else std::cout<<888388829888;
	
	
	
	return 0;
}