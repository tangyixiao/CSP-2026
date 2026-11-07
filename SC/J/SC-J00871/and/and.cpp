#include<bits/stdc++.h>
using namespace std;
int s[100005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    int a;
    int sb;
    cin>>a;
    cin>>sb;
    for(int i=1;i<=a;i++){
    	cin>>s[i];
	}
	sort(s,s+a+1);
	cout<<s[3];
	return 0;
}