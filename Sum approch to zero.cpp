#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	sort(arr,arr+n);
    if(n < 2)
    {
        cout << "Invalid Input";
    }
    else{
	
    cout<<arr[0]<<" and "<<arr[1]<<endl;
}
	return 0;
}
