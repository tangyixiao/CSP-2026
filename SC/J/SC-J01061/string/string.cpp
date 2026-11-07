#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long n,a[N];
string s,c;
bool fh(string l){
	long long len=l.length(),flag=1,cnt=0;
	for(int i=0;i<len;i++){
		if(l[i]!=l[len-i-1]){
			flag=0;
			cnt++;
		}
	}
	if(flag==1) return true;
	else{
		cout<<cnt/2;
		return false; 
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c;
		for(int j=1;j<=a[i];j++){
			s+=c;
		}
	}
	//cout<<s<<"\n";
	if(fh(s)==true){
		cout<<0;
		return 0;
	}
	return 0;
}