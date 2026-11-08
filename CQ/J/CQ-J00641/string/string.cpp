#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
string s;
int n=0;
long long cnt=0,l=0;
bool check(string a){
	string v;
	long long k=a.size()-1;
	while(k>=0){
		v+=a[k];
		k--;
	}
	if(a==v) return true;
	else return false;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	f(i,1,n){
		int x;
		char v;
		cin>>x>>v;
		f(j,1,x) s+=v;
	}
	if(check(s)){
		cout<<0;
		return 0;
	}
	l=s.size()-1;
	f(i,0,(s.size()-1)/2){
		if(s[i]!=s[l]){
			cnt++;
		}
		l--;
	}
	cout<<cnt<<endl;
	
	return 0;
}
