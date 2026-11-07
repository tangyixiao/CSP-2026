#include<bits/stdc++.h>
using namespace std;
string s,q;
long long sum;
long long ans;
int nb(string z,string b){
for(int i=0;i<sum/2;i++){
	if(z[i]!=b[i])
	ans++;
}
return ans;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	while(n--){
		long long a;
		char b;
		cin>>a>>b;
		for(int i=1;i<=a;i++){
			sum++;
			s+=b;
		}	
	}
    for(int i=sum/2+1;i>=0;i--){
			q+=s[i];
		}	
	
	cout<<nb(s,q)<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
