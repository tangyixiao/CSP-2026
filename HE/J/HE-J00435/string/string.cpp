#include<bits/stdc++.h>
using namespace std;
long long nn;
string ss,ss2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> nn;
	while(nn--){
		long long p;
		char c;
		string m="";
		cin >> p;
		cin>>c;
		while(p--){
			ss=ss+c;
			ss2=c+ss2;
		}
		ss=ss+m;
		ss2=m+ss2;
	}
	long long sum=0;
	for(int i=0;i<ss.size()/2+1;i++){
		if(ss[i]!=ss2[i]){
			sum++;
		}
	}cout << sum;
	return 0;
}
