#include <iostream>
using namespace std;
int main(){
	char ch;
	int num1,num2;
	cout << "Plesae enter a number : ";
	cin >> num1;
	fflush(stdin);
	cout << "Plesae enter a process : ";
	cin >> ch;
	fflush(stdin);
	cout << "Plesae enter a number : ";
	cin >> num2;
	fflush(stdin);
	switch(ch){
		case '+':
			int result;
			result=num1+num2;
			cout << num1 << " + " << num2 << " = " << result;
			break;
		case '-':
			int result1;
			result1=num1-num2;
			cout << num1 << " - " << num2 << " = " << result1;
			break;
		case 'x':
			int result2;
			result2=num1*num2;
			cout << num1 << " x " << num2 << " = " << result2;
			break;
		case '*':
			int result3;
			result3=num1*num2;
			cout << num1 << " x " << num2 << " = " << result3;
			break;
		case '/':
			int result4;
			if(num2==0){
				cout << "Couldn't be divided by 0.\n";
				break;
			}
			result4=num1/num2;
			cout << num1 << " / " << num2 << " = " << result4;
			break;
		case '%':
			int result5;
			if(num2==0){
				cout << "Couldn't be divided by 0.\n";
				break;
			}
			result5=num1%num2;
			cout << num1 << " %% " << num2 << " = " << result5;
			break;
		default:
			cout << "Invalid Process!\n";
			break;
	}
	return 0;
}