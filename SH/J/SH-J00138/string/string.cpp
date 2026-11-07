#include<bits/stdc++.h>
using namespace std;
const int N=200005;
int n,pos1=0,pos2;
long long a,sum=0;
char c;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	if(n==1){
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int i=1;i<=a;i++){
			s+=c;
		}	
	}
	pos2=s.length()-1;
	while(pos1<=pos2){
		if(s[pos1]!=s[pos2]){
			sum++;
		}
		pos1++;
		pos2--;
	}
	cout<<sum<<endl;
	return 0;
}
