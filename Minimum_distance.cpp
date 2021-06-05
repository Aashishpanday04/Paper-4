#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x,y;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Please enter two number";
	cin>>x>>y;
    int min_dist = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if( (x == arr[i] && y == arr[j] ||
                y == arr[i] && x == arr[j]) &&
                min_dist > abs(i-j))
            {
                min_dist = abs(i-j);
                
            }
        }
    }
	cout<<"Minimum distance between "<<x<<" and "<<y<<" is "<<min_dist<<endl;
	return 0;
}
