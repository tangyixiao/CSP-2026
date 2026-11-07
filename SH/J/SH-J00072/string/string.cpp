#include<bits/stdc++.h>
using namespace std;
struct ID{
	int a;
	char c;
};
stack<int> a_st;
stack<char> c_st;
ID v[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	int n;
	long long ans=0;
	cin>>n;
	long long sum=0;
	for(int i=0;i<n;i++){
		int a;
		char c;
		cin>>a>>c;
		v[i].a=a,v[i].c=c; 
		sum+=a;
	}
	//cout<<sum<<endl;
	long long epush=0;
	int i;
	bool f=false; 
	for(i=0;epush<sum/2&&f==false;i++){
		if(sum/2-epush<v[i].a){
		//	cout<<sum/2-epush<<endl;
			a_st.push(sum/2-epush);
			v[i].a-=sum/2-epush;
			f=true;
		}else{
			a_st.push(v[i].a);
		}
		c_st.push(v[i].c);
		epush+=v[i].a;
	}
	if(f) i--;
	if(sum%2==1) v[i].a-=1;
	for(;i<n;){
		//if(a_st.empty()||c_st.empty()){
		//	cout<<i<<" "<<v[i].a;
		//	break;
		//}
		int a=a_st.top();
		char c=c_st.top();
		//int anschange=v[i].first()-a;
		//cout<<1<<endl;
		if(v[i].a-a>=0){
		//	cout<<v[i].a<<" "<<v[i].c<<" "<<a<<" "<<c<<" ";
			//cout<<2<<endl;
			if(v[i].c!=c){
				ans+=a;
			}
		//	cout<<ans<<endl;
			v[i].a-=a;
			a_st.pop(),c_st.pop();
			if(v[i].a==0) i++;
		}else{
		//	cout<<v[i].a<<" "<<v[i].c<<" "<<a<<" "<<c<<" ";
			//cout<<3<<endl;
			if(v[i].c!=c){
				ans+=v[i].a;
			}
		//	cout<<ans<<endl;
			a_st.pop();
			//ID temp;
			//temp.a=a-v[i].a,temp.c=c;
			//st.push(make_pair(a-v[i].first(),c));
			a_st.push(a-v[i].a);
			i++;
		}
	}
	cout<<ans;
	return 0;
}
