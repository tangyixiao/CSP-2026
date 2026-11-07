#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int main( ){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int op=0;
	while(n--){
		long long p;
		char t;
		cin>>p>>t;
		op+=p;
		for(int i=1;i<=p;i++){
			s+=t;
		}
	}
	string w;
	int dds=0,j=0;
	if(op%2==0){
		w=s.substr(0,op/2);
		reverse(w.begin(),w.end());	
		for(int i=op/2-1;i<op-1;i++){
			if(w[j]!=s[i]){
				dds++;
			}
			j++;
		}
	}else{
		w=s.substr(0,op/2);
		reverse(w.begin(),w.end());
		for(int i=op/2;i<op-1;i++){
			if(w[j]!=s[i]){
				dds++;	
			}
			j++;
		}
	}
	cout<<dds;
	return 0;
}

