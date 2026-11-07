#include<iostream>
#include<cmath>
using namespace std;
struct str{
	int a;
	char b;
};
struct str s[200009];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i].a>>s[i].b;
	}
	long long ans=0;
	int i=n;
	int j=1;
	while(i>j){
		if(s[i].b!=s[j].b){
			ans+=min(s[i].a,s[j].a);
		}
		if(s[i].a>s[j].a){
			s[i].a-=s[j].a;
			j++;
		}
		else{
			s[j].a-=s[i].a;
			i--;
		}
	}
	cout<<ans;
	return 0;
}
