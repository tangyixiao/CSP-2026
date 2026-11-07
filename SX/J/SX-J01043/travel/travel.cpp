#include<bits/stdc++.h>
#define LL long long
#define ULL unsigned long long
#define re register
#define ss stable_sort

using namespace std;

const ULL N = 1e3+5;

string c1,s1,c2,s2;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);

	cin>>c1>>s1>>c2>>s2;

	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	else{
		cout<<1;
		string a=s1.substr(0,2);
		string b=s2.substr(0,2);
		if(a!=b){
			cout<<"000";
			return 0;
		}
		else{
			cout<<1;
			int len1=s1.size(),len2=s2.size();
			if(s1[len1-1]=='C'&&s2[len2-1]=='D'){
				cout<<"00";
				return 0;
			}
			else if(s1[len1-1]=='D'&&s2[len2-1]=='C'){
				cout<<"00";
				return 0;
			}
			else{
				cout<<1;
				if(abs(s1[len1-1]-s2[len2-1])==1){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
		}
	}
	return 0;
}