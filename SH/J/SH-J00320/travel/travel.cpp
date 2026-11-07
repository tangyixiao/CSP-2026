#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string c1,s1,c2,s2;
bool f1,f2,f3,f4;
int f(string s){
	if(s.length()==2)
		return (s[0]-'0')*10+(s[1]-'0');
	if(s.length()==3)
		return (s[0]-'0')*100+(s[1]-'0')*10+(s[2]-'A'+1);
}
void input(){
	cin>>c1>>s1>>c2>>s2;
}
void solve(){// 02 01A 02 01B
	//printf("%d %d %d %d\n",f(c1),f(s1),f(c2),f(s2));
	if(f(c1)==f(c2)){
		f1=1;
		if(f(s1)/10==f(s2)/10){
			f2=1;
			int t1=f(s1)%10,t2=f(s2)%10;
			//printf("%d %d %d\n",t1,t2,abs(t1-t2));
			if(t1<=3&&t2<=3){
				f3=1;
				if(abs(t1-t2)==1)f4=1;
			}
			if(t1>=4&&t2>=4){
				f3=1;
				if(abs(t1-t2)==2)f4=1;
			}
		}
	}
	cout<<f1<<f2<<f3<<f4;
}
int main(){// Trick or Treat!
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	input();
	solve();
	return 0;
} 
