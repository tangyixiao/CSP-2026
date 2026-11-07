#include <iostream>
using namespace std;
int n;const int N=2e5+5;
long long ans;
struct piece{
	int a;
	char c;
	void input(){
		cin >> a>>c;
	}
}s[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >>n;
	for (int i=1;i<=n;i++){
		s[i].input();
	}int st=1,ed=n;
	while (st<ed){
		if(s[st].a==s[ed].a){
			if (s[st].c!=s[ed].c){
				ans+=s[st].a;
			}st++;ed--;
		}else if (s[st].a>s[ed].a){
			if (s[st].c!=s[ed].c){
				ans+=s[ed].a;
			}s[st].a-=s[ed].a;ed--;
		}else{
			if (s[st].c!=s[ed].c){
				ans+=s[st].a;
			}s[ed].a-=s[st].a;st++;
		}
	}cout<< ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}