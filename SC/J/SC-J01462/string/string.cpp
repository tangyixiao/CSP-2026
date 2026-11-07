#include<bits/stdc++.h>
using namespace std;
string a,s,d;
long long c;
long long n,b,g;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>c;
		cin>>a;
		for(long long j=0;j<c;j++){
			s=s+a;
		}
	}
	b=s.size();
	for(long long i=b-1;i>=0;i--){
		d=d+s[i];
	}
	if(s==d) cout<<"0";
	else {
		for(long long i=0;i<b;i++){
			if(s[i]!=d[i]){
				g++;
			}
		}
	}
	cout<<g/2;
	return 0;
	fclose(stdin);
	fclose(stdout);
}