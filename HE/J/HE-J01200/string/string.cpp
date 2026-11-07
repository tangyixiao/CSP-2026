#include<bits/stdc++.h>
using namespace std;
struct anclute{
	int shu;
	char nei;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,m=0,c=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].shu>>a[i].nei;
	}
	char b=a[0].nei;
	for(int i=0;i<n;i++){
		if(a[i].nei!=b) m++;
		c+=a[i].shu;
	}
	if(m==0) cout<<0;
	else cout<<c/2;
	return 0;
} 
