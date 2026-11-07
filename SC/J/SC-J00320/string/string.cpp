#include<bits/stdc++.h>
using namespace std;
int ni[200100];
char zm[200100];
long long tot_long,change;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>ni[i]>>zm[i];
		for(int j=0;j<ni[i];j++){
			s+=zm[i];
		}
	}
	long long a=s.size();
	for(long long i=0;i<a/2;i++){
		if(s[i]==s[a-i-1]){
			continue;
		}else{
			change++;
			continue;
		}
	}
	cout<<change;
}