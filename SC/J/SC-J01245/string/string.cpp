#include<bits/stdc++.h>
using namespace std;
string   s;
long long a,b;
char  n;
string  x;
long long l;
long long w1,w2;
bool back(string  x,long long l){
	for(int i=0;i<l;i++){
		if(x[i]!=x[l-i-1]){
			return false;
		}
	}
	return true;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>b>>n;
		//cout<<b<<' '<<n<<endl;
		for(int j=0;j<b;j++){
			s+=n;
			//cout<<is<<' ';
		}
	}
	l=s.size();
	//cout<<l;
	//cout<<s;
	for(int i=0;i<l;i++){
		x+=s[l-i-1];
	}
	//cout<<x;
	if(back(x,l)==true){
		cout<<0;
		return 0;
	}else{
		for(int i=0;i<l-i-1;i++){
			if(x[i]!=x[l-i-1]){
				w1++;
			}
		}
	}
	cout<<w1;
	return 0;
}
