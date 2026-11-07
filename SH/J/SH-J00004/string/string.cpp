#include<bits/stdc++.h>
using namespace std;
long long n=0,a=0,ot1=0,ot2=0;
char c=0;
string all,p1,p2,p3;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a>>c;
		for(long long j=1;j<=a;j++){
			all+=c;
		}
	}
	p1=all;
	p2=all;
	p3=all;
	for(long long i=0;i<=all.size()-1;i++){
		p3[all.size()-1-i]=all[i];
	}
	if(p3==all){
		cout<<"0";
		return 0;
	}
	for(long long i=0;i<=p1.size()-1;i++){
		if(p1[i]=!p1[p1.size()-1-i]){
			ot1++;
			p1[p1.size()-1-i]=p1[i];
		}
		if(p2[i]=!p2[p2.size()-1-i]){
			ot2++;
			p2[p2.size()-1-i]=p2[i];
		}
	}
	cout<<min(ot1,ot2);
	return 0;
}
