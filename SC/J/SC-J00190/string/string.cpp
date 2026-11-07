include<bits/std.c++>
using namespace std;
int main{
    freopen("string.in",'r',stdin);
    string s;
    int n[200010];
    int k;
    cin>>n;
    for(int i=1;i<=n-1;i++){
    	if(s[i]!=s[n-1-i]){
    		s[i]=s[n-1-i];
    	k=k+1;
		}
	}
    cout<<k;
    return 0;
}