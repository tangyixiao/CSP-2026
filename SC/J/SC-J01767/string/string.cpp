#include<bits/stdc++.h>
using namespace std;
long long n,ans;
struct s{
	long long a;
	char c;
} str[214514];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>str[i].a>>str[i].c;
	}
	for(int i=1,j=n;i<j;){
		if(str[i].c!=str[j].c){
			if(str[i].a>str[j].a){
				str[i].a-=str[j].a;
				ans+=str[j].a;
				j--;
			}
			else if(str[i].a<str[j].a){
				str[j].a-=str[i].a;
				ans+=str[i].a;
				i++;
			}
			else{
				ans+=str[i].a;
				str[j].a=str[i].a=0;
				i++;
				j--;
			}
		}
		else{
			if(str[i].a>str[j].a){
				str[i].a-=str[j].a;
				j--;
			}
			else if(str[i].a<str[j].a){
				str[j].a-=str[i].a;
				i++;
			}
			else{
				str[j].a=str[i].a=0;
				i++;
				j--;
			}
		}
	}
	cout<<ans;
	return 0;
}
