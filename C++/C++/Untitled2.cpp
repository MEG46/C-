#include <iostream>
using namespace std;
int main(){
	int quiz1,quiz2,mdtrm,fnl;
	double result;
	cout << "Please enter your 1st quiz mark : ";
	cin >> quiz1;
	cout << "Please enter your 2st quiz mark : ";
	cin >> quiz2;
	cout << "Please enter your midterm mark : ";
	cin >> mdtrm;
	cout << "Please enter your final mark : ";
	cin >> fnl;
	result=0.1*quiz1+0.1*quiz2+0.4*mdtrm+0.4*fnl;
	if(result<45&&result>=0){
		cout << "Your Mark : FF\n";
		cout << "Final Average : " << result;
	}else if(result<50&&result>=45){
		cout << "Your Mark : FD\n";
		cout << "Final Average : " << result;
	}else if(result<55&&result>=50){
		cout << "Your Mark : DC\n";
		cout << "Final Average : " << result;
	}
	else if(result<65&&result>=55){
		cout << "Your Mark : CB\n";
		cout << "Final Average : " << result;
	}
	else if(result<75&&result>=65){
		cout << "Your Mark : BB\n";
		cout << "Final Average : " << result;
	}else if(result<85&&result>=75){
		cout << "Your Mark : BA\n";
		cout << "Final Average : " << result;
	}else if(result<=100&&result>=85){
		cout << "Your Mark : AA\n";
		cout << "Final Average : " << result;
	}else{
		cout << "Invalid Process!\n";
	}
	
	
}