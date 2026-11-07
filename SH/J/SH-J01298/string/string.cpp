#include <bits/stdc++.h>
using namespace std;
int a[200001],j=1,k,n,m1,m2,mm;
unsigned long long z;
char b[200001],s1,s2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	k=n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	m1=a[j];
	m2=a[k];
	s1=b[j];
	s2=b[k];
	while(true){
		mm=min(m1,m2);
		m1-=mm;
		m2-=mm;
		if(j==k || (m1==0 && m2==0 && j-1==k)){
			break;
		}
		if(s1!=s2){
			z+=mm;
		}
		if(m1==0){
			j++;
			m1=a[j];
			s1=b[j];
		}
		if(m2==0){
			k--;
			m2=a[k];
			s2=b[k];
		}
		//cout<<j<<" "<<k<<" "<<z<<endl;
	}
	cout<<z;
	return 0;
}
