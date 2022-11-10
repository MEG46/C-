#include <iostream>

using namespace std;
void sum(int a, int b){
	int c;
	c=a+b;
	cout << a << " + " << b << " = " << c;
}
void subs(int a, int b){
	int c;
	c=a-b;
	cout << a << " - " << b << " = " << c;
}
void mult(int a,int b){
	int c;
	c=a*b;
	cout << a << " x " << b << " = " << c;
}
void divi(int a, int b){
	int c;
	if(b==0){
				cout << "Couldn't be divided by 0.\n";
				break;
			}
	c=a/b;
	cout << a << " / " << b << " = " << (float)c;
}
void mod(int a, int b){
	int c;
	if(b==0){
				cout << "Couldn't be divided by 0.\n";
				break;
			}
	c=a%b;
	cout << a << " %% " << b << " = " << c;
}
int main(){
	char c;
	int a,b;
	cout << "Please enter a number : ";
	cin >> a;
	fflush(stdin);
	cout << "Please enter a process : ";
	cin >> c;
	fflush(stdin);
	cout << "Please enter a number : ";
	cin >> b;
	if(c=='+'){
		sum(a,b);
	}else if(c=='-'){
		subs(a,b);
	}else if(c=='x'){
		mult(a,b);
	}else if(c=='*'){
		mult(a,b);
	}else if(c=='/'){
		divi(a,b);
	}else if(c=='%'){
		mod(a,b);
	}else{
		cout << "Invalid Process!\n";
	}
	return 0;
}