#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","r",stdout);
	char f;
	long long n,g,c=0,y=0,h=0;
	string s1,s2;
	cin >>n;
	for(long long i=0; i<n; i++) {
		cin>>g;
		cin>>f;
		for(long long j=0; j<g; j++) {
			s1[c]=f;
			c++;
		}
	}
	if(c%2==0) {
		for(long long i=0; i<c/2; i++) {
			s2[i]=s1[i];
		}
		for(long long i=c/2; i>=0; i--) {
			s2[i]=s1[i];
		}
		for(long long i=0; i<c; i++) {
			if(s1[i]!=s2[i]) {
				y++;
			}
		}
	} else {
		for(long long i=0; i<c/2+1; i++) {
			s2[i]=s1[i];
			h+=1;
		}
		for(long long i=c/2-1; i>=0; i--) {
			s2[h++]=s1[i];
		}
		for(long long j=0; j<c; j++) {
			cout<<s1[j];
		}
		cout<<endl;
		for(long long j=0; j<c; j++) {
			cout<<s2[j];
		}
		for(long long i=0; i<c; i++) {
			if(s1[i]!=s2[i]) {
				y++;
			}
		}
	}
	cout<<y;
	return 0;
}