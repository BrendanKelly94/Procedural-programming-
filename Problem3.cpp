#include <iostream>
#include <vector>
using namespace std;
vector<int> reduce(int a[], int n){
	vector<int> b;
	int first ,second, third = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > first){first = a[i];}
		else if(a[i] > second && a[i] < first){second = a[i];}
		else if(a[i] > third && a[i] < second){ third = a[i];}
		
	}
	for(int i = 0; i < n; i++)
	{
		if(a[i] < third)
		b.push_back(a[i]);
		
	}
	
	return b;
}
int main(){
 
	int arr[] = {9,1,1,6,7,1,2,3,3,5,6,6,6,6,7,9};
	vector<int> a = reduce(arr,16);
	for(int i = 0; i < a.size(); i++){
		cout << a[i] << " ";
	}
	return 0;
}
