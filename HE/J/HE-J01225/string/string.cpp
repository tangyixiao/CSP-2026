#include<bits/stdc++.h>
using namespace std;
long long a,n,l=1;
char c;
vector<char> v;
bool check(){
	long long m=v.size();
	if(m%2==0){
		long long j=v.size()-1;
		for(long long i=0;i<m/2;i++){
			if(v[i]!=v[j]) return false;
			j--;
		}
	}else{
		long long j=v.size()-1;
		for(long long i=0;i<m/2;i++){
			if(v[i]!=v[j]) return false;
			j--;
		}
	}
	return true;
}
void change(){
	long long g=0,m=v.size();
	if(m%2==0){
		long long  j=v.size()-1;
		for( long long  i=0;i<m/2;i++){
			if(v[i]!=v[j]) g++;
			j--;
		}
	}else{
		long long  j=v.size()-1;
		for( long long  i=0;i<m/2;i++){
			if(v[i]!=v[j]) g++;
			j--;
		}
	}
	cout<<g;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	while(cin>>a>>c){
		for(int i=l;i<l+a;i++) v.insert(v.end(),c);
	} 
	for(int i=0;i<v.end()-v.begin();i++) cout<<v[i];
	if(check()) cout<<0;
	else{
		change();
	}
	return 0;
}
