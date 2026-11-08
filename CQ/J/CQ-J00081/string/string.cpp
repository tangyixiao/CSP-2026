#include<bits/stdc++.h> 
using namespace std;
int n,a,num;
long long ans;
char c;
string s=" ";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",sidout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		ans+=a;
		for(int j=1;j<=a;j++){
			s=s+c;
		}
	}
	for(int i=1;i<=ans/2;i++){
		if(s[i]!=s[ans-i+1]){
			num++;
		}
	}
	cout<<num;
	return 0;
}
