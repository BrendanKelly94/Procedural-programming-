#include <iostream>
#include <vector>
using namespace std;
int iBin(int a[], int n , int x){
	int low = 0;
    int high = n -1;

  while(low <= high) 
  {
    int mid = (low+high)/2;
    if(x < a[mid]) {high = mid - 1;}
    else if(x > a[mid]){ low = mid + 1;}
    else{ return a[mid];}
  }
}
int rBin(int a[], int first, int last, int x) {
  
   if (first <= last) {
       int mid = (first + last) / 2; 
       if (x == a[mid]) {return mid;} 
       else if (x < a[mid]) { return rBin(a, first, mid-1, x);}
       else{return rBin(a, mid+1, last, x);}
   }
   return -(first + 1); 
}



int main(){
    int K= 3000;
    int n = 8000;
	int *a = new int[n];
	for(int i = 0; i < n; i++){a[i]= i;}
	for(int j=0; j<K; j++)
for(int i=0; i<n; i++) if(rBin(a,0,n,i) != i) cout << "\nERROR";
//for(int i=0; i<n; i++) if(iBin(a,n,i) != i) cout << "\nERROR";
}
