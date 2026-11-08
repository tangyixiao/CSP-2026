#include<bits/stdc++.h>
using namespace std;
struct st{
	int a;
	char b;
};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s="";
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		char b;
		cin>>b;
		for(long long j=1;j<=a;j++){
			s+=b;
		}
	}
	long long num=0;
	string s1=s.substr(0,floor(s.size()/2)),s2=s.substr(ceil(s.size()/2));
	reverse(s2.begin(),s2.end());
	for(long long i=0;i<s1.size();i++){
		if(s2[i]!=s1[i]){
			num++;
		}
	}
	cout<<num<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*int n;
	cin>>n;
	vector<st> s(n);
	long long l;
	for(int i=1;i<=n;i++){
		cin>>s[i-1].a;
		l+=s[i-1].a;
		cin>>s[i-1].b;
	}
	if(l%2){
		
		int hl=l/2;
		vector<st> v(l);
		for(int i=1;i<=n;i++){
			st w;
			if(s[i-1].a>hl){
				w.a=hl;
				w.b=s[i-1].b;
				v[i-1]=w;
				break;
			}
			if(s[i-1].a==hl){
				v[i-1]=s[i-1];
				break;
			}
			v[i-1]=s[i-1];
			hl-=s[i-1].a;
		}
		hl=l/2;
		vector<st> t(l);
		int j=0;
		for(int i=n-1;i>=0;i++){
			st w;
			if(s[i].a>hl){
				w.a=hl;
				w.b=s[i].b;
				t[j]=w;
				break;
			}
			if(s[i].a==hl){
				t[j]=s[i];
				break;
			}
			t[j]=s[i];
			hl-=s[i].a;
		}
		int num=0;
		for(int i=0;i<hl;i++){
			if(v[i].a!=t[i].a){
				num+=v[i].a;
			}
			else{
				num+=abs(v[i].a-t[i].a);
				int w=v[i].a-t[i].a;
				t[i].a+=w;
				t[i+1].a-=w;
			}
		}
		cout<<num<<endl;
	}
	*/
	return 0;
} 
