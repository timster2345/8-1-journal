/* Timothy Milne
*7-30-23
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float initialInvestment, monthlyDeposit, annualInterest, months, years;
	float totalAmount, interestAmount, yearlyTotalInterest;

	cout << "**********************************" << endl;
	cout << "*********** Data Input ***********" << endl;
	cout << "Initial Investment Amount: " << endl;
	cout << "Monthly Deposit: " << endl;
	cout << "Annual Interest: " << endl;
	cout << "Number of years: " << endl;

	system("PAUSE");

	cout << "**********************************" << endl;
	cout << "*********** Data Input ***********" << endl;
	cout << "Initial Investment Amount: $" << endl;
	cin >> initialInvestment;
	cout << "Monthly Deposit: $" << endl;
	cin >> monthlyDeposit;
	cout << "Annual Interest: %" << endl;
	cin >> annualInterest;
	cout << "Number of years: " << endl;
	cin >> years;

	system("PAUSE");

	totalAmount = initialInvestment;

	cout << endl << "Balance and Interest Without Additional Monthly Deposit" << endl;
	cout << "===============================================================" << endl;
	cout << "Year          Year End Balance         Year End Earned Interest" << endl;
	cout << "---------------------------------------------------------------" << endl;

	for (int i = 0; i < years; i++) {
		interestAmount = ((totalAmount) * (annualInterest / 100));
		totalAmount = totalAmount + interestAmount;
		cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAmount << "\t\t\t$" << interestAmount << endl;
	}

	cout << endl << "Balance and Interest Without Additional Monthly Deposit" << endl;
	cout << "===============================================================" << endl;
	cout << "Year          Year End Balance         Year End Earned Interest" << endl;
	cout << "---------------------------------------------------------------" << endl;

	for (int i = 0; i < years; i++) {
		yearlyTotalInterest = 0;

		for (int j = 0; j < 12; j++) {
			interestAmount = (((totalAmount + monthlyDeposit) * (annualInterest / 200)) / 12);
			yearlyTotalInterest = yearlyTotalInterest + interestAmount;
			totalAmount = totalAmount + monthlyDeposit + interestAmount;
		}
		cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAmount << "\t\t\t$" << yearlyTotalInterest << endl;
	}
	return 0;
}