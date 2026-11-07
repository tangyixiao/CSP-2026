#include<bits/stdc++.h> 
using namespace std;
string t;
char c,h,s[1000000009];
long long num,a,q,n,minn;
bool b=1;
void f(){
	for(long long i=0;i<num;i++){
		if(s[i]!=s[num-i-1]){
			b=0;
		}
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long  i=0;i<n;i++){
		cin>>a>>c;
		for(long long j=0;j<a;j++){
			s[q]=c;
			t[q]=c;
			q++;
		}
		num+=a;
	}
	
	f();
	if(b){
		cout<<0;
		return 0;
	}
	for(long long i=0;i<num;i++){
		if(s[num-i-1]!=s[i]){
			s[num-i-1]=s[i];
			minn++;
		}
		
	}
	cout<<minn;
return 0;
}

