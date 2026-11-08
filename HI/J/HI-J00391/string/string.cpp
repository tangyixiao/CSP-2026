#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10,A=1e9+5;
long long n;
struct S{
	long long a;
	string c;
}s[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>s[i].a>>s[i].c;
	}
	bool f=true;
	for(long long i=1;i<n;i++){
		if(s[i+1].c<s[i].c){
			swap(s[i+1],s[i]);
		}
		else if(s[i+1].a<s[i].a){
			swap(s[i+1],s[i]);
		}
		if(s[i+1].c!=s[i].c){
			f=false;
		}
	}
	if(f==true){
		cout<<"0";
		return 0;
	}
	long long ans=0;
	int l=1,r=0;
	while(l<n-r&&(s[l].a||s[n-r].a)){
		if(s[l].c!=s[n-r].c){
			if(s[l].a>s[n-r].a){
				ans+=s[n-r].a;
				s[l].a-=s[n-r].a,r++;
			}
			else if(s[l].a=s[n-r].a){
				ans+=s[l].a;
				r++,l++;
			}
			else{
				ans+=s[l].a;
				s[n-r].a-=s[l].a,l++;
			}
		}
		else{
			if(s[l].a>s[n-r].a){
				s[l].a-=s[n-r].a;
				r++;
			}
			else if(s[l].a=s[n-r].a){
				l++,r++;
			}
			else{
				s[n-r].a-=s[l].a;
				l++;
			}
		}
	}
	cout<<ans;
	return 0;
}
