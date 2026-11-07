#include <iostream>
#include <cmath>
using namespace std;

long long stl(string s){
	long long l=0;
	for(int i=s.length()-1,j=0;i>=0;i--,j++){
		l+=(s[i]-'0')*pow(10,j);
	}return l;
}
char assumption(string s,long long n){
	int i=0;long long n1=0;
	string num;
	for(;i<s.length();i++){
		if(s[i]>='0'&&s[i]<='9') num+=s[i];
		else{
			if(n1-1<=n&&n1+stl(num)-1>=n) return s[i];
			else{
				n1+=stl(num);
				num="";
			}
		}
	}
}
long long total_char(string s){
	string num;long long n=0;
	for(int i=0;i<s.length();i++){
		if(s[i]>='0'&&s[i]<='9') num+=s[i];
		if(!(s[i]>='0'&&s[i]<='9')||i+1==s.length()){
			n+=stl(num);
			num="";
		}
	}return n;
}
long long crt_stg_len(string s,long long n,int plan){
	int i=0;long long n1=0;
	string num;
	for(;i<s.length();i++){
		if(s[i]>='0'&&s[i]<='9') num+=s[i];
		else{
			if(n1-1<=n&&n1+stl(num)-1>=n){
				switch(plan){
					case(1): return stl(num);
					case(2): return n-n1;
					case(3): return n1+stl(num)-n-1;
					break;
				}
			}
			else{
				n1+=stl(num);
				num="";
			}
		}
	}
}

int main(){
	int n;
	cin>>n;
	string ai,ci,s;
	for(int i=0;i<n;i++){
		cin>>ai>>ci;
		s+=ai;s+=ci;
	}long long change=0;
	for(long long i1=0,i2=total_char(s)-1;i1<=(total_char(s)-1)/2&&i2>=(total_char(s)-1)/2;){
		long long csl;
		if(crt_stg_len(s,i1,1)-crt_stg_len(s,i1,2)<=crt_stg_len(s,i2,1)-crt_stg_len(s,i2,3)) csl=crt_stg_len(s,i1,1)-crt_stg_len(s,i1,2);
		else csl=crt_stg_len(s,i2,1)-crt_stg_len(s,i2,3);
		change+=csl*(!(assumption(s,i1)==assumption(s,i2)));
		i1+=csl;i2-=csl;
	}cout<<change<<endl;
	return 0;
}