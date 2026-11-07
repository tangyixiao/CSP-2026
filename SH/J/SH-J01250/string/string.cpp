#include<iostream>
using namespace std;
long long n,len,a,cnt;
string c;
struct A{
	string ci;
	long long num;
}str[300000];
string number(int i){
	for(int j=1;j<=n;j++){
		if(i<=str[j].num&&i>str[j-1].num){
			return str[j].ci;
		} 
	}
}
int main(){ 
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>c;
		str[i+1].ci=c;
		len+=a;
		str[i+1].num=len;
	}
	for(int i=1;i<=len/2;i++){
		if(number(i)!=number(len-i+1)){
			cnt++;
		}
	}
	cout<<cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
