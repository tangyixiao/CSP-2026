#include<bits/stdc++.h>
using namespace std;
int a[200005],c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	string s=" ";
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int ans=0,k=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s[k]=c[i];
			k++;
		}
	} 
	string st=" ";
	for(int i=0;i<s.size();i++){
		int j=s.size()-1;
		st[j]=s[i];
		j--;
	}
	for(int i=0;i<s.size();i++){
		if(s[i]!=st[i]){
			ans++;
		}
	}
	cout<<ans/2;
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}
/*旁边这位能不能不要自言自语了-_-
感觉这次废了...这应该是我最后一次考了... 
*/
