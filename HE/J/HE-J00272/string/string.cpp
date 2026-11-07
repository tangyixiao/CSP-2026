#include <bits/stdc++.h>
using namespace std;
#define ll long long


struct partstr{
	ll a;
	char c; 
};
partstr str[200005];
ll n,ans,L;

ll fuabs(ll num1,ll num2){
	if(num1>=num2)return num1-num2;
	return num2-num1;
}

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int a_t=0,pos=0;char c_t_l,c_t;
	cin >> n;
	for(int i =1;i<=n;i++){
		cin >> a_t >> c_t;
		if(c_t==c_t_l){
			str[pos].a+=a_t;
		}
		else{
			c_t_l = c_t;
			str[++pos].a=a_t;
			str[pos].c = c_t;
		}
	}
	//for(int i =1;i<=pos;i++){
		//printf("i:%d a:%-5d c:",i,str[i].a);
		//cout<< str[i].c << "\n";
	//}
	//cout << "\n";
	for(int i = 1;i<=(pos+1)/2;i++){
		int nxt = pos+1-i;
		if(str[i].a==str[nxt].a){
			if(str[i].c!=str[nxt].c){
				ans+=str[i].a;
			}
		}
		else{
			if(str[i].c==str[nxt].c){
				ans+=fuabs(str[i].a,str[nxt].a);
			}
			else{
				int t = max(str[i].a,str[nxt].a);
				ans+=t;
			}
		}
	}
	cout << ans;
	return 0;
} 
