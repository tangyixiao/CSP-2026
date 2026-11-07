#include<bits/stdc++.h>
using namespace std;
#define FILE "travel"
#define JUDGE
int get(char c){
	if(c<='C') return 0;
	else return 1;
}
int near(char c,char k){
	if(abs(c-k)==1 && (c^k)!=7) return 1;
	else return 0;
}
int main(){
	#ifdef JUDGE
	freopen(FILE ".in","r",stdin);
	freopen(FILE ".out","w",stdout);
	#endif
	int a1,b1;
	string a2,b2;
	cin>>a1>>a2>>b1>>b2;
	cout<<(a1==b1)
		<<(a1==b1 && a2.substr(0,2)==b2.substr(0,2))
		<<(a1==b1 && a2.substr(0,2)==b2.substr(0,2) && get(a2[2])==get(b2[2]))
		<<(a1==b1 && a2.substr(0,2)==b2.substr(0,2) && get(a2[2])==get(b2[2]) && near(a2[2],b2[2]));
	#ifdef JUDGE
	fclose(stdin);
	fclose(stdout);
	#endif
	return 0;
}