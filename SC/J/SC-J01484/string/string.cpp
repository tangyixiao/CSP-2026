#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	int n,cot=0;
	cin>>n;
	for(int i=0;i<n;i++){
	    char c;
	    int a;
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	int t=s.size();
	if(t%2==0){
		string r1;
		for(int i=t-1;i>=t/2;i--){
			r1+=s[i];
		}
		for(int i=0;i<t/2;i++) cot++;
	}else if(t%2!=0){
		string r2;
		for(int i=t-1;i>t/2;i--){
			r2+=s[i];
		}
		for(int i=0;i<t/2;i++){
			if(r2[i]!=s[i]) cot++;
		}
	}
	cout<<cot;
	return 0;
}