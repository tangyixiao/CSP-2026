#include<bits/stdc++.h>
using namespace std;
int n;
long long sm=0,as=0;
string s;
bool hw(string str){
	int len=str.size();
	string s1="";
	for(int i=len-1;i>0;--i){
		s1+=str[i];
	}
	return s1==str;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		int x; char c;
		scanf("%d %c",&x,&c);
		for(int j=1;j<=x;++j) s+=c;
		sm+=x;
	}
	if(hw(s)){
		printf("0");
		fclose(stdin); fclose(stdout);
		return 0;
	}else{
		long long mid=sm/2,k1=0,k2=sm-1;
		while(k1<mid&&k2>mid){
			if(s[k1]!=s[k2]){
				as++;
				s[k2]=s[k1];
				k1++,k2--;
			}
		}
//		cout<<hw(s)<<"\n";
		printf("%lld",as);
		fclose(stdin); fclose(stdout);
		return 0;
	}
	fclose(stdin); fclose(stdout);
	return 0;
}
/*
	**    **
   **** * ****
  ******99******
     *******
	  *****
       ***
        *
*/