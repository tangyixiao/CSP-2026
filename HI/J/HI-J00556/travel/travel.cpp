#include<bits/stdc++.h> 
using namespace std;
string a,b,c,d;
struct stu{
	int h;
	int l;
	int k;
	int p;
	string zm;
};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	stu pep;
	stu pop;
	cin>>a>>b>>c>>d;
	pep.h=a[0]-'0';
	pep.l=a[1]-'0';
	pop.h=c[0]-'0';
	pop.l=c[1]-'0';
	pep.k=b[0]-'0';
	pep.p=b[1]-'0';
	pep.zm=b[2];
	pop.k=d[0]-'0';
	pop.p=d[1]-'0';
	pop.zm=d[2];
	if(pep.h==pop.h && pep.l==pop.l){
		cout<<'1';
		if(pep.k==pop.k && pep.p==pop.p){
			cout<<'1';
			if('F'-b[2]>=3 && 'F'-d[2]>=3 || b[2]=='F' && d[2]=='D' || b[2]=='D' && d[2]=='F'){
				cout<<'1';
				if(abs(b[2]-d[2])==1 || b[2]=='F' && d[2]=='D' || b[2]=='D' && d[2]=='F'){
					cout<<'1';
				}else{
					cout<<'0';
				}
			}else{
				cout<<'0';
				cout<<'0';
			}
		}else{
			cout<<'0';
			cout<<'0';
			cout<<'0';
		}
	}else{
		cout<<'0';
		cout<<'0';
		cout<<'0';
		cout<<'0';
	}
	return 0;
}
