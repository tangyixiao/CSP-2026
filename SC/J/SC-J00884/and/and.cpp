#include<bits/stdc++.h>
using namespace std;
const int N=10e5*2+5;
int n,m,a[N],ans=-1,t[N],k=1;
stack<int> s;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	s.push(a[1]);
	t[k]=a[1];
	/*for(int i=2;i<=n;i++){
		if(s.size()==m){
	       ans=max(ans,t[k]);
           s.pop();
	       t[k]=0;
	       k--;
        } 
        s.push(a[i]);
        k++;
		t[k]=a[i]&t[k-1];
		cout<<a[i]<<"&"<<t[k-1]<<"="<<t[k]<<endl; 
	}
	t[1]=a[1];*/
	for(int i=1;i<=n;i++){;
		if(a[i]==s.top()){
			s.pop();
			s.push(a[i+1]);
			k--;
		    t[k]=a[i+1];
	        for(int j=i+2;j<=n;j++){
		        if(s.size()==m){
			       ans=max(ans,t[k]);
			       s.pop();
			       t[k]=0;
			       k--;
		        } 
		        s.push(a[j]);
		        k++;
		        t[k]=a[j]&t[k-1];
		        //cout<<a[j]<<"&"<<t[k-1]<<"="<<t[k]<<endl; 
	        }
		}
	}
	cout<<ans<<endl;
	return 0;
}