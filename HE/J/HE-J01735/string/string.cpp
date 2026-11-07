#include<iostream>
#include<algorithm>
using namespace std;
int n;
string s,s1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string .out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int j=0;j<a;j++){
			s+=c;
		}
	}
	s1=s;
	reverse(s1.begin(),s1.end());
	if(s1==s){
		cout<<0<<endl;
		return 0;
	}
	s1=s;
	if(s.length()%2==0){
		int l=s.length()/2;
		int sum=0;
		reverse(s1.begin(),s1.begin()+l);
		for(int i=0;i<l;i++){
			if(s1[i+l]!=s1[i]){
				sum++;
			}
		}
		cout<<sum<<endl;
	}else{
		int l=s.length()/2;
		int sum;
		reverse(s1.begin(),s1.begin()+l);
		for(int i=0;i<l;i++){
			if(s1[i+l+1]!=s1[i]){
				sum++;
			}
		}
		cout<<sum<<endl;
	}
}
