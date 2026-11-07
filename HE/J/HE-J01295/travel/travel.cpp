#include<bits/stdc++.h>
using namespace std;
int a1,b1;
string a2,b2;
bool f1,f2,f3,f4;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>a2>>b1>>b2;
	if(a1==b1){
		f1=1;
		if(a2[0]==b2[0] && a2[1]==b2[1]){
			f2=1;
			char t1=a2[2],t2=b2[2];
			if(((t1>='A' && t1<='C' && t2>='A' && t2<='C')
			||(t1>='D' && t1<='F' && t2>='D' && t2<='F'))){
				f3=1;
				if(t1-t2==1 || t2-t1==1)
					f4=1;
			}			
		}
	}
	cout<<f1<<f2<<f3<<f4;
	return 0;
} 
