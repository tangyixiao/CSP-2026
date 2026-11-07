#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[100860];
char s[100860];
long long ans=0;
long long h=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>s[i];
	}
	int i=1;
	h=n;
	while(i<=h){
		if(s[i]==s[h]){
			break;
		}
		if(s[i]!=s[h]){
			if(a[i]<a[h]){
				ans+=a[i];
				a[h]-=a[i];
				i++;
			}else if(a[i]>a[h]){
				ans+=a[h];
				a[i]-=a[h];
				h--;
			}else if(a[i]==a[h]){
				ans+=a[i];
				i++;
				h--;
			}
		}else{
			if(a[i]<a[h]){
				a[h]-=a[i];
				i++;
			}else if(a[i]>a[h]){
				a[i]-=a[h];
				h--;
			}else if(a[i]==a[h]){
				i++;
				h--;
			}
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
