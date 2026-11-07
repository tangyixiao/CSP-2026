#include<bits/stdc++.h>
using namespace std;
long long n,a,x=0,z=0;
char c;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		cin>>c;
		x+=a;
		for(int j=0;j<a;j++){
			s+=c;
		}
	}
	for(int i=0;i<x/2;i++){
		if(s[i]!=s[x-i-1]){
			z++;
			//cout<<i<<" "<<x-i<<" "<<s[i]<<" "<<s[x-i]<<endl;
		}
	}
	//cout<<s<<endl;
	printf("%d",z);
	fclose(stdin);
	fclose(stdout);
	return 0;
}