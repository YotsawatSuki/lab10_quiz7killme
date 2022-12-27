#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;


int main(){	
	double loan, rateIN, pay;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rateIN;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	int year = 1;
	double sum;
	
	do{
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year; 
		cout << setw(13) << left << loan;
		
		double K = loan*(rateIN/100);
		
		cout << setw(13) << left << K;
		cout << setw(13) << left << loan+K;
		double total = loan+K;
			if(total>pay){
				cout << setw(13) << left << pay;
			}else{
				pay = total;
				cout << setw(13) << left << pay;
			}
		cout << setw(13) << left << total-pay;
		double NewBar = total-pay;
		cout << "\n";
		year++;
		sum = NewBar;
		loan = NewBar;
	}while(sum>0);
	
	return 0;
}
