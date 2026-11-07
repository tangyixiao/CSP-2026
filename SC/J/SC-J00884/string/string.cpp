#include<bits/stdc++.h>
using namespace std;
const int N=10e8+5;
long long n,shu,l=0,cnt=0,k=0;
char s[N],c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>shu>>c;
		for(int j=1;j<=shu;j++){
			s[k+j]=c;
		}
		l+=shu;
		k=l;
	}
	/*//cout<<l<<endl;
	for(int i=1;i<=l;i++){
		cout<<s[i]<<" ";
	}*/
	for(int i=1;i<=l/2;i++){
		if(s[i]!=s[l+1-i]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}