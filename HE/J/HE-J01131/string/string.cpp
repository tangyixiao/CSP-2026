#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string S;
	int n;
	cin>>n;
	int b=0;
	for(int i=0; i<n; i++){
		cin>>S;
		string t=reverse(s.begin(),s.end());
		if(S==t){
			cout<<0<<" ";
		}else{
			while(n){
				S.end()=S.begin();
				b++;					
			}
		}
	}
	cout<<b<<endl;
	return 0;
}
