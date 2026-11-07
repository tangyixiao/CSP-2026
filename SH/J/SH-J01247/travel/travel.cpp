#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;int main(){int ans=0;char c1[2],c2[2],s1[5],s2[5];cin>>c1>>s1>>c2>>s2;if(c1[0]==c2[0]&&c1[1]==c2[1]){ans+=1000;if(s1[0]==s2[0]&&s1[1]==s2[1]){ans+=100;if(s1[2]=='F'||s1[2]=='D'){if(s2[2]=='F'||s2[2]=='D'){ans+=11;cout<<ans;return 0;}}if(s1[2]!='F'&&s1[2]!='D'&&s2[2]!='D'&&s2[2]!='F'){ans+=10;if(s1[2]=='B'||s2[2]=='B'){ans+=1;cout<<ans;return 0;}else;{cout<<ans;return 0;}}else;{cout<<1100;return 0;}}else;{cout<<1000;return 0;}}else;{cout<<"0000";return 0;}return 0;}
