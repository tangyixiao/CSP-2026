#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s1,s2,s3,s4;
	int n;
	cin>>n;
	long long sum;
	for(int i=0;i<n;i++){
		int u;
		char t;
		cin>>u>>t;
		for(int j=0;j<u;i++){
			s1.push_back(t);
		}
	}
    s2=s1;
	reverse(s1.begin(),s1.end());
	cout<<s1<<" "<<s2;
if(s1==s2){
	cout<<0;
}
//aabbc 
	return 0;
} 

