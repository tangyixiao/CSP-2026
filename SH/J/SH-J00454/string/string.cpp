#include <iostream>
#include <cstdio>
using namespace std;
int n,a[200010];
char c[200010];
bool flag=true;
long long ans,num;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		if(a[i]>510){
			flag=false;
		}
	}
	if(flag==true){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=a[i];j++){
				s[num]=c[i];
				num++;
			}
		}
		for(long long i=0;i<=(num/2);i++){
			if(s[i]!=s[num-1-i]){
				ans++;
			}
		}
		cout<<ans;
	}
	else{
		cout<<0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
