#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		long long x;
		cin>>x;
		char c;
		cin>>c;
		for(long long i=1;i<=x;i++){
			s+=c;
		}
	}
	int l=s.size();
	int h=0;
	int j=l-1;
	if(l%2!=0){
		for(int i=0;i<l;i++){
			if(s[i]!=s[j]) h++;
			j--;
		}
	}
	cout<<h/2;
	fclose(stdin);fclose(stdout);
	return 0;
} 