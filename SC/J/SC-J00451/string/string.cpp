#include<bits/stdc++.h>
using namespace std;
char s1[1000000010],q;
long long m,num=0;
int main(){
	long long a,n;
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>q;
		for(int j=m;j<m+a;j++){
			s1[j]=q;
		}
		m+=a;
	}
	for(int i=0;i<m/2;i++){
		if(s1[i]==s1[m-i-1]){
			continue;
		}else{
			num++;
		}
	}
	cout<<num;
}