#include <iostream>
using namespace std;
class Sum{
	public:
    Sum(int a,int b){
        num1=a;
        num2=b;
	}int res(){
	   return num1 + num2;
	}
	private:
		int num1,num2;
};
class Subs{
	public:
    Subs(int a,int b){
        num1=a;
        num2=b;
	}int res(){
	   return num1 - num2;
	}
	private:
		int num1,num2;
};
class Mult{
	public:
    Mult(int a,int b){
        num1=a;
        num2=b;
	}int res(){
	   return num1 * num2;
	}
	private:
		int num1,num2;
};
class Div{
	public:
    Div(int a,int b){
        num1=a;
        num2=b;
	}int res(){
	   return num1 / num2;
	}
	private:
		int num1,num2;
};
class Mod{
	public:
    Mod(int a,int b){
        num1=a;
        num2=b;
	}int res(){
	   return num1 % num2;
	}
	private:
		int num1,num2;
};
int main(){
	char ch;
	int x,y;
	cout << "Please enter a number : ";
	cin >> x;
	fflush(stdin);
	cout << "Please enter a process : ";
	cin >> ch;
	fflush(stdin);
	cout << "Please enter a number : ";
	cin >> y;
	fflush(stdin);
if(ch=='+'){
	Sum ex(x,y);
	cout << x << " + " << y << " = " << ex.res() << endl;
}else if(ch=='-'){
	Subs ex(x,y);
	cout << x << " - " << y << " = " << ex.res() << endl;
}else if(ch=='*'||ch=='x'){
	Mult ex(x,y);
	cout << x << " x " << y << " = " << ex.res() << endl;
}else if(ch=='/'){
	Div ex(x,y);
	cout << x << " / " << y << " = " << ex.res() << endl;
}else if(ch=='%'){
	Mod ex(x,y);
	cout << x << " % " << y << " = " << ex.res() << endl;
}else {
	cout << "Invalid Process!\n";
}
	return 0;
}