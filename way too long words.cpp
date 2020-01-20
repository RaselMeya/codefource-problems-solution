#include <bits/stdc++.h>
using namespace std;


int main() {

		string st;
		int n,i;
		cin>>n;
		for(i=0;i<n;i++){
		cin>>st;
		int len=st.size();
	   if(len>10){
	   	cout<<st[0]<<len-2<<st[len-1]<<endl;
	   }
	   else
	   cout<<st<<endl;
		}
	return 0;
}
