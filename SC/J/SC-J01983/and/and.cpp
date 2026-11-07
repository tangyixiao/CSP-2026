#include <iostream>
int n,m;
int f(int *p,int s,int m1){
	int ma=0;
	int a;
	if(m1<=0){
		return p[s-1];
	}
	for(int ia=s;ia<n-m1+1;ia++){
		std::cout<<p[ia]<<std::endl;
		a=p[ia]&f(p,ia+1,m1-1);
		std::cout<<m1<<' '<<a<<std::endl;
		if(a>ma){
			ma=a;
		}
	}
	return ma;
}
int main(){
	std::cin>>n>>m;
	int s[n];
	for(int i=0;i<n;i++){
		std::cin>>s[i];
	}
	
	std::cout<<f(s,0,m);
	return 0;
}