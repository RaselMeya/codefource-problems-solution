
#include <iostream>
using namespace std;

int main() {

	long long int n,k,arr[100],i,co=0;
	cin>>n;
	cin>>k;

	for(i=1;i<=n;i++){

		if(i%2!=0){
			co++;
			arr[co]=i;
			cout<<arr[co]<<" ";
		}

	}


	for(i=1;i<=n;i++){

		if(i%2==0){
			co++;
			arr[co]=i;
			cout<<arr[co]<<" ";
		}

	}
	cout<<endl;
	//long long int sum=co;//+co1;
	for(i=1;i<=co;i++){
           if(k==i){
        cout<<i<<" " <<arr[i]<<endl;
	}


	}

	return 0;
}
