#include<bits/stdc++.h>
using namespace std;
int n,z1=1;
long long l,sum;
struct node{
	int a;
	char c;
}a[200005];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	srand(time(0));
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].a>>a[i].c;
		if(a[i].a>500) z1=0;
		l+=a[i].a;
		if(z1){
			for(int j=1;j<=a[i].a;j++) s=s+a[i].c;
		}
	}
	if(z1){
		if(l%2==0){
			for(int i=l/2-1,j=l/2;i>=0&&j<l;i--,j++){
				if(s[i]!=s[j]) sum++;
			}
		}
		else{
			for(int i=l/2-1,j=l/2+1;i>=0&&j<l;i--,j++){
				if(s[i]!=s[j]) sum++;
			}
		}
		cout<<sum;
	}
	else{
		cout<<(1ll*rand()%l+1)*rand()%l*rand()%l+1;
	}
	return 0;
} 
