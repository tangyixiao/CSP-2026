#include<bits/stdc++.h>
using namespace std;
char s[200005];
long long n,b[200005],m;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b[i]>>s[i];
	}
	long long i=1,j=n;
	while(i!=j){
		if(b[i]==0)i++;
		if(b[j]==0)j--;
		if(s[i]!=s[j]){
			if(b[i]>b[j]){
				m+=b[j];
				b[i]-=b[j];
				j--;
			}else if(b[i]<b[j]){
				m+=b[i];
				b[j]-=b[i];
				i++;
			}else if(b[i]==b[j]){
				m+=b[i];
				i++;
				j--; 
			}
		}else if(b[i]>b[j]){
			b[i]-=b[j];
			j--;
		}else if(b[i]<b[j]){
			b[j]-=b[i];
			i++;
		}else {
	        i++;
			j--; 
		}
	} 
	cout<<m;
	return 0;
}
