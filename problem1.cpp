#include <iostream>
using namespace std;

int maxlen(int a[], int n){
	int max, temp = 1;
	for(int i = 1; i < n; i++)
	{
	a[i] == a[i-1]? temp++ : temp = 1;
	if(temp > max) max = temp;
	}
	return max;
}
int main(){
	int a[] = {1,1,1,2,3,3,5,6,6,6,6,7,9};
	int max = maxlen(a,13);
	cout << max;
	return 0;
}
