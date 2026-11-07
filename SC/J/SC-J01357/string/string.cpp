#include<bits/stdc++.h>
using namespace std;
long long n;
vector<long long>a;
vector<char>s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin.tie(0),cout.tie(0);
	long long n;
	cin>>n;
	long long len=0;
	for(int i=1;i<=n;i++){
		char d;
		long long l;
		cin>>l>>d;
		if(len==0||d!=s[len-1]){
			len++;
			a.push_back(l);
			s.push_back(d);
		}else{
			a[len-1]+=l; 
		}
	}
//	for(int i=0;i<s.size();i++){
//		cout<<s[i];
//	}
//	for(int i=0;i<s.size();i++){
//		cout<<a[i];
//	}
	long long ll=0;
	if(s.size()==1){
		cout<<0;
		return 0;
	}
	while(s.size()&&s.size()!=1){
		if(s[0]!=s[s.size()-1]){
			ll+=min(a[0],a[a.size()-1]);
		}
		if(a[0]==a[a.size()-1]){
			a.erase(a.begin()+0);
			a.erase(a.begin()+a.size()-1);
			s.erase(s.begin()+0);
			s.erase(s.begin()+s.size()-1);
		}else if(a[0]>a[a.size()-1]){
			a[0]-=a[a.size()-1];
			a.erase(a.begin()+a.size()-1);
			s.erase(s.begin()+s.size()-1);
		}else{
			a[a.size()-1]-=a[0];
			a.erase(a.begin()+0);
			s.erase(s.begin()+0);
		}
//		for(int i=0;i<s.size();i++){
//		cout<<s[i];
//		}
//		cout<<endl;
//		cout<<"a:";
//		for(int i=0;i<s.size();i++){
//		cout<<a[i];
//		}
//		cout<<endl;
	}
	cout<<ll;
	return 0;
}