#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n,a[1000],sum=0,total=0;
    char c[1000];
    string s,m1,n1;
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i+1]>>c[i+1];
    	for(int j=1;j<=a[i+1];j++){
    		s+=c[i+1];
		}
	}
	cout<<s<<endl;;
	m1=s.substr(0,s.length()/2);
	n1=s.substr((s.length()+3)/2,s.length()/2);
	sort(n1[0],n1[n1.length()-1]);
	for(int i=0;i<m1.length();i++){
		if(m1[i]==n1[i]){
			sum++;
		}
	}
	if(sum==m1.length()-1){
		cout<<0;
	}
    fclose(stdin);
	fclose(stdout);
	return 0;
}