#include<bits/stdc++.h> 
using namespace std;
string s,a,b,c;
int a1,b1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s>>a>>b>>c;
	int h1;
	int h2,h3;
	for(int i=0;i<2;i++){
		if(s[i]!=b[i]){
			cout<<"0";
			h1=0;
			break;
		}else if(s[i]==b[i]&&i==1){
			h1=1;
			cout<<"1";
		}
	}
	if(h1==1){
		int h2=0;
		for(int i=0;i<2;i++){
			if(a[i]!=c[i]){
				cout<<"0";
				h2=0;
				break;
			}else if(a[i]==c[i]&&i==1){
				h2=1;
				cout<<"1";
			}
		}
		if(h2==1){
			int h3=0;
			if(a[2]=='A'||a[2]=='B'||a[2]=='C'){
				if(c[2]=='A'||c[2]=='B'||c[2]=='C'){
					cout<<"1";
					h3=1;
				}else if(c[2]!='A'&&c[2]!='B'&&c[2]!='C'){
					cout<<"0";
					h3=0;
				}
			}else if(a[2]=='D'||a[2]=='F'){
				if(c[2]=='D'||c[2]=='F'){
					cout<<"1";
					h3=2;
				}else if(c[2]!='D'&&c[2]!='F'){
					cout<<"0";
					h3=0;
				}
			}
			if(h3==2){
				cout<<"1";
			}else if(h3==1){
				if(a[2]=='A'||a[2]=='B'){
					if(c[2]=='A'||c[2]=='B'){
						cout<<"1";
					}
				}
				if(a[2]=='B'||a[2]=='C'){
					if(c[2]=='C'||c[2]=='B'){
						cout<<"1";
					}
				}
				if(a[2]=='D'||a[2]=='C'){
					if(c[2]=='C'||c[2]=='D'){
						cout<<"0";
					}
				}
				if(a[2]=='A'||a[2]=='C'){
					if(c[2]=='C'||c[2]=='A'){
						cout<<"0";
					}
				}
			}else if(h3==0){
				cout<<"0";
			}
		}else{
			cout<<"00";
		}
	}else{
		cout<<"000";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
