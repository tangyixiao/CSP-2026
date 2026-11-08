#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,p,len=0,num=0;string s,zd="";
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>p>>s; len=len+p;
		for(int i=1;i<=p;i++){
		zd=zd+s;
		}
}
int k=0;
for(int i=0;i<(len-1);i++){
	if(zd[i]==zd[i+1]) continue;
	else k++;}
	if(k!=0)
	 num+=(len/2);

	cout<<num;
	return 0;

}
