#include<iostream>
using namespace std;
int T,n,m,p;
string s,t;
int main()
{
	cin>>T;
	while(T--){
		cin>>n>>m>>s>>t;p=0;
		for(int i=0;i<t.size();i++)if(s[p]==t[i])p++;
		cout<<p<<endl;
	}
}