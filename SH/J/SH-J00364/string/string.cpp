#include<bits/stdc++.h>
using namespace std;
int main(){
	FILE *fin,*fout;
	fin=fopen("string.in","r");
	fout=fopen("string.out","w");
	int n;
	string s;
	fscanf(fin,"%d",&n);
	for(int i=1;i<=n;i++){
		long long l;
		char c;
		string t;
		fscanf(fin,"%d %c",&l,&c);
		t.assign(l,c);
		s+=t;
	}
	s=' '+s;
	long long cnt=0LL,len=s.size()-1;
	for(int i=1;i<s.size()/2;i++){
		if(s[i]!=s[len-i+1]){
			cnt++;
		}
	}
	fprintf(fout,"%d",cnt);
	return 0;
}

