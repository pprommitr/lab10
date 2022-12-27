#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double loan,rate,amount,total;
	int year = 1 ;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> amount;

	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	while(true){
	
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << loan * rate/100;
	total = loan + (loan * rate/100);
	cout << setw(13) << left << total;
	if(total < amount){
	 amount = total ;
	}
	cout << setw(13) << left << amount;
	loan = total - amount;
	cout << setw(13) << left << loan;
	cout << "\n";	
	year++;
	if (loan <= 0) break;
	}
	return 0;
}