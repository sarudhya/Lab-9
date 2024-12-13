#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	double loan,interest,rate,pay,prevba,total,newba;
	int year = 1;

	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
	
	
		
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest" ;
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	prevba = loan;

	do{
		interest = prevba*(rate/100);
		total = prevba + interest;
		if(total < pay){
		pay = total;
		}
	if(total >= pay){
		newba = total - pay;
	}
		
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year; 
		cout << setw(13) << left << prevba;
		cout << setw(13) << left << interest;
		cout << setw(13) << left << total;
		cout << setw(13) << left << pay;
		cout << setw(13) << left << newba;
		cout << "\n";	
		prevba = newba;
		year ++;
	
	
	}	while(newba > 0);
	
	return 0;
	
	return 0;
}
