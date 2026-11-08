#include<bits/stdc++.h>
using namespace std;
int f=0;
string c1,s1,c2,s2;
int main(){
	//std::ios::sync_with_stdio(0);
	freopen("r","travel.in",stdin);
	//freopen("w","travel.out",stdout);
	cin>>c1>>s1>>c2>>s2;
	cout<<c1<<c2<<s1<<s2<<endl;
	if(c1==c2){
		cout<<1;
		string a,b;
		a.push_back(s1[0]);
		a.push_back(s1[1]);
		b.push_back(s2[0]);
		b.push_back(s2[1]);
		if(a==b){
			cout<<1;
			char c=s1[2],d=s2[2];
			if(((c=='D' || c=='F') && (d='F' || d=='d')) || ((c>='A' && c<='C')&&(d>='A' && d<='C'))){
				cout<<1;
				if(c-1==d || d-1==c){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}
