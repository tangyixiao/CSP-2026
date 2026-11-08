#include<bits/stdc++.h>
//#define int long long
//#define pii pair<int,int>
//#define pb push_back
//#define mr make_pair
//#define fi first
//#define se second
//#define grt greater
//#define p_queue priority_queue
//#define ep empty
//#define vec vector
//#define fr front
//#define pp pop_back
using namespace std;
char aa[10],bb[10];
signed main(){
	ios::sync_with_stdio(0);
	cout.tie(0);cout.tie(0);
//	freopen("travel.in","r",stdin);
//	freopen("travel.out","w",stdout);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	cin>>a;
	for(int i=1;i<=3;i++){
		cin>>aa[i];
	}
	cin>>b;
	for(int i=1;i<=3;i++){
		cin>>bb[i];
	}
//	cout<<a<<" "<<aa<<" "<<b<<" "<<bb<<"\n";
	if(a==b){
		if(aa[2]==bb[2]&&aa[1]==bb[1]){
			bool f=((aa[3]<='C')^(bb[3]<='C'));
			if(f){
				cout<<"1100\n";
			}else{
				if(aa[3]<bb[3])swap(aa[3],bb[3]);
				if(aa[3]=='C'&&bb[3]=='B'){
					cout<<"1111\n";
				}else if(aa[3]=='E'&&bb[3]=='D'){
					cout<<"1111\n";
				}else if(aa[3]=='B'&&bb[3]=='A'){
					cout<<"1111\n";
				}else{
					cout<<"1110\n";
				}
			} 
		}else{
			cout<<"1000\n";
		}
	}else{
		cout<<"0000\n";
	}
	return 0;
}/*


*/

