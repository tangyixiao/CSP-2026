#include<bits/stdc++.h>
using namespace std;
long long n,a,num=0;
string s;
int b[100000005];
char c,d[100000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b[i]>>d[i];
		
	}
	
	int m1=1,m2=n;
	while(m1!=m2){
		if(d[m1]!=d[m2]){
			if(b[m1]<b[m2]){
				b[m2]-=b[m1];
				num+=b[m1];
				m1++;
			}
			else if(b[m1]>b[m2]){
				b[m1]-=b[m2];
				num+=b[m2];
				m2--;
			}
			else if(b[m1]==b[m2]) {
				num+=b[m1];
				m1++,m2--;
			}
		}
		else {
			if(b[m1]<b[m2]){
				b[m2]-=b[m1];
				m1++;
			}
			else if(b[m1]>b[m2]){
				b[m1]-=b[m2];
				m2--;
			}
			else if(b[m1]==b[m2]) {
				m1++,m2--;
			}
		}
	}
	cout<<num;
	
	return 0;
}