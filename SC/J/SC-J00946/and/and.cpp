

#include<bits/stdc++.h>
using namespace std;
bool asd(long long a,long long s){
	return a>s;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long a,s;
	cin>>a>>s;
	long long as[a];
	for(int i=0;i<a;i++){
		cin>>as[i];
	}
	sort(as,as+a,asd);
	long long zs=0;
	zs=as[0];
	for(int i=1;i<s;i++){
		zs=zs&as[i];
	}
	cout<<zs;
	fclose(stdin);
	fclose(stdout);
	return 0;
}