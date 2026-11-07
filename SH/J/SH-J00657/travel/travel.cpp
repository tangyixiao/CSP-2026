#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
char p1,p2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1;
	s1=' ';
	for(int i=1;i<=2;i++){
		char a;
		cin>>a;
		s1+=a;
	}
	cin>>p1;
	cin>>c2;
	s2=' ';
	for(int i=1;i<=2;i++){
		char a;
		cin>>a;
		s2+=a;
	}
	cin>>p2;
	if(p1>p2){
		swap(p1,p2);
	}
	if(c1==c2){
		cout<<1;
		if(s1==s2){
			cout<<1;
			if(p1<='C'&&p2>='D'){
				for(int i=1;i<=2;i++){
					cout<<0;
				}
			}else{
				cout<<1;
				if(p2-p1==1){
					cout<<1;
				}else{
					cout<<0;
				}
			}
		}else{
			for(int i=1;i<=3;i++){
				cout<<0;
			}
			return 0;
		}
	}else{
		for(int i=1;i<=4;i++){
			cout<<0;
		}
		return 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
