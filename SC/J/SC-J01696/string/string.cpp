#include<bits/stdc++.h>
using namespace std;
char c[2000005],string2[50000005];
long long n,ans1,ans2,cd=0,a[200005],ru1=10000000005,ru2=-1,ru3=1;
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		if(a[i]<ru1){
			ru1=a[i];
		}
		cd+=a[i];
	}
	if(cd>5000000000){
		for(int i=ru1;i>1;i--){
			int flag=1;
			for(int j=1;j<=n;j++){
				if(a[j]%flag!=0){
					flag=0;
					break;
				}
			}
			if(flag==1){
				ru2=i;
				break;
			}
		}
		cd/=ru2;
	}
	if(ru2!=-1){
		for(int i=1;i<=n;i++){
			a[i]/=ru2;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=ru3;j<ru3+a[i];j++){
			string2[j]=c[i];
		}
		ru3+=a[i];
	}
	int flag=0;
	if(cd%2!=0){
		flag=1;
	}
	for(int i=1;i<=(cd+flag)/2;i++){
		if(string2[i]!=string2[cd-i+1]){
			ans1++;
		}
		if(string2[cd-i+1]!=string2[i]){
			ans2++;
		}
	}
	if(ru2==-1){
		cout<<min(ans1,ans2);
	}
	else{
		cout<<min(ans1,ans2)*ru2;
	}
	return 0;
}