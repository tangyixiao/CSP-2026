#include<bits/stdc++.h>
using namespace std;
long long n,l,l2,sum;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		long long m;
		string m1;
		cin>>m;
		cin>>m1;
		for(int j=0;j<m;j++){
			s+=m1;
			cout<<s<<endl;
		}
		l+=m;		
	}
l2=l/2;	
if(l2%2==0){
	l2--;
}
	for(int i=0;i<=l2;i++){
		if(s[i]!=s[l-i-1]){
			sum++;
		}
		
	}cout<<sum;
	return 0;
}
