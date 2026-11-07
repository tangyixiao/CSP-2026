#include<bits/stdc++.h>
using namespace std;
struct asd{
	long long a;
	char s;
};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long a;
	long long zs=0;
	scanf("%d",&a);
	string as;
	long long u=0;
	asd s[a];
	for(long long i=0;i<a;i++){
		cin>>s[i].a;
		cin>>s[i].s;
		u+=s[i].a;
		for(long long q=0;q<s[i].a;q++){
			as+=s[i].s;
		}
	}
	int o=a-1;
	for(long long i=0;i<u/2;i++){
		if(as[o]!=as[i]){
			zs+=1;
		}
		o--;
	}
	cout<<zs;
	fclose(stdin);
	fclose(stdout);
	return 0;
}