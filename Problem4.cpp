#include <iostream>
#include <vector>
#include <string>
using namespace std;
void BigInt(int n){
	int temp; vector<int> digits;
	//storing each 7x7 digit in a string
	string digit0,digit1,digit2,digit3,digit4,digit5,digit6,digit7,digit8,digit9;
	while(n > 0)
	{
		temp = n % 10;
		digits.push_back(temp);
		n /= 10;
	}
	for(int i = digits.size() - 1; i >= 0;i--)
	{
		switch(digits[i])
		{
		
	case 0:
	digit0 =" @@@@@ @@   @@@@   @@@@   @@@@   @@@@   @@ @@@@@ ";
	for(int i =0; i < 49; i++){
		if(i%7 == 0) cout << endl;
		cout << digit0[i];
	}
	break;
	
	case 1:
	digit1 ="  @@    @@@     @@     @@     @@     @@   @@@@@@ ";
	for(int i =0; i < 49; i++){
		if(i%7 == 0 ) cout << endl;
		cout << digit1[i];
	}
	break;
	
	case 2:
	digit2 =" @@@@  @    @      @   @@@@  @      @      @@@@@@";
	for(int i =0; i < 49; i++){
		if(i%7 == 0) cout << endl;
		cout << digit2[i];
	}
	break;
	
	case 3:
	digit3 =" @@@@@ @     @      @ @@@@@@      @@     @ @@@@@@";
	for(int i =0; i < 49; i++){
		if(i%7 == 0) cout << endl;
		cout << digit3[i];
	}
	break;
	
	case 4:
	digit4 = "   @@@   @@ @@ @@  @@@@@@@@@     @@     @@     @@";
	for(int i =0; i < 49; i++){
		if(i%7 == 0) cout << endl;
		cout << digit4[i];
	}
	break;
	
	case 5:
	digit5 = " @@@@@@@      @      @@@@@@       @      @@@@@@@ ";
	for(int i =0; i < 49; i++){
		if(i%7 == 0) cout << endl;
		cout << digit5[i];
	}
	break;
	
	case 6:
	digit6 ="  @@    @@    @@     @@      @@@@@ @     @ @@@@@ ";
	for(int i =0; i < 49; i++){
		if(i%7 == 0) cout << endl;
		cout << digit6[i];
	}
	break;
	
	case 7:
	digit7 = "@@@@@@@     @@    @@    @@    @@    @@    @@     ";
	for(int i =0; i < 49; i++){
		if(i%7 == 0) cout << endl;
		cout << digit7[i];
	}
	break;
	
	case 8:
	digit8 =" @@@@@ @@   @@@@   @@@@@@@@@@@   @@@@   @@@@@@@@@";
	for(int i =0; i < 49; i++){
		if(i%7 == 0) cout << endl;
		cout << digit8[i];
	}
	break;
	
	case 9:
	digit9 =" @@@@@ @    @@@    @@ @@@@@@     @@     @@     @@";
	for(int i =0; i < 49; i++){
		if(i%7 == 0) cout << endl;
		cout << digit9[i];
	}
	default:
		break;
		}
    }
}
int main(){
	int n;
	cout << "enter int";
	cin >> n;
	BigInt(n);
	return 0;
}
