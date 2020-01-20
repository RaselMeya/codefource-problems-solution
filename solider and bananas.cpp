
#include <iostream>
using namespace std;

int main() {
	int k,n,w,i;
	int sum=0;
	cin>>k>>n>>w;
	for(i=w;i>0;i--){
		sum=sum+(i*k);
	}
	if(sum>n){
		int s=sum-n;
		cout<<s<<endl;
	}
	else
	{
		cout<<"0"<<endl;
	}



	return 0;
}
