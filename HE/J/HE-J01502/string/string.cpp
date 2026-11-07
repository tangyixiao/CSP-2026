#include <bits/stdc++.h>
using namespace std;
int n,a,cot;
char c;
string S;
bool frog=false;
int num(string S,int l,int cont,char ch){
	S[l]=ch;
	if(S[-1:0]=S) return cont;
	else return num(S,l+1,cont+1,ch)
}
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a>>c;
		for(int i=0;i<a;++i) S+=c;
	}
	for()
	cout<<S;
	return 0;
}
