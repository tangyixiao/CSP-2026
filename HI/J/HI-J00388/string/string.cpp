#include<bits/stdc++.h>
using namespace std;
struct g{
	long long s;
	char z;
};
int a;
long long sum;
string c;
g b[100005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>a;
	for(int i=1;i<=a;i++){
		cin>>b[i].s>>b[i].z;
		c+=b[i].z;
	}
	for(int i=0;i<c.size()/2;i++){
		if(c[i]!=c[c.size()-1])sum++;
	}
	cout<<sum;
	return 0;
}
