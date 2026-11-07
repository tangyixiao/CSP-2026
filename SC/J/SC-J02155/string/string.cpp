#include<bits/stdc++.h>
using namespace std;
int n;
long long sum=0;
long long an=0;
string ss;
struct lk{
	long long a;
	char s;
}l[200005];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>l[i].a>>l[i].s;
		sum+=l[i].a;
		for(int j=0;j<l[i].a;j++){
			ss+=l[i].s;
		}
	}
	if(sum%2==0){
		sum/=2;
	}
	else{
		sum=(sum-1)/2;
	}
	string aa;
	string b;
	for(int i=0;i<sum;i++){
		aa+=ss[i];
	}
	for(int i=ss.size()-1;i>ss.size()-1-sum;i--){
		b+=ss[i];
	}
	for(int i=0;i<sum;i++){
		if(aa[i]!=b[i]){
			an++;
		}
	}
	cout<<an;
	return 0;
}
