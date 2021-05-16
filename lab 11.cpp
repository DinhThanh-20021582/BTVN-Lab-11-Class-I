#include<iostream>

using namespace std;
class Fraction
{
public:
	 int numerator, denominator;
//bai2+4
        int convert(int a, int b) {
        
            if (a == 0 || b == 0) {
                return a + b;
            }
            while (a != b) {
                if (a > b) {
                    a -= b; 
                }
                else {
                    b -= a;
                }
            }
            return a; 
        }
        int quy_dong(int a, int b)
        {
        return ((a * b) /convert(a, b));
        }

		void print(int a)
		{ 
            cout <<"The fraction is: "<< this->numerator / a << "/" << this->denominator / a<<endl;
		}
//bai3
		void add(int a, int b, int c, int d) //a=tu1 b=tu2 c=mau1 d=mau2
        {
        cout << a * quy_dong(c, d) / c + b * quy_dong(c, d) / d << "/" << quy_dong(c, d);   
        }
        void minus(int a, int b, int c, int d) 
        {
        cout << a * quy_dong(c, d) / c - b * quy_dong( c, d) / d << "/" << quy_dong(c, d);  
        }   
        void multiply(int a, int b, int c, int d)
        {
        cout << (a * b) / convert(a * b, c * d) << "/" << (c * d) / convert(a * b, c * d);
        }
};

int main() 
{
	
	char sign;
    Fraction fraction1{7,5};
    Fraction fraction2{4,16};
    fraction1.print(fraction1.convert(fraction1.numerator, fraction1.denominator));
    fraction2.print(fraction2.convert(fraction2.numerator, fraction2.denominator));
    int tu1, tu2, mau1, mau2;
    tu1 = fraction1.numerator / fraction1.convert(fraction1.numerator, fraction1.denominator);
    tu2 = fraction2.numerator / fraction2.convert(fraction2.numerator, fraction2.denominator);
    mau1 = fraction1.denominator / fraction1.convert(fraction1.numerator, fraction1.denominator);
    mau2 = fraction2.denominator / fraction2.convert(fraction2.numerator, fraction2.denominator);
    cout << "Enter the sign: ";
    cin >> sign;
    switch (sign)
    {
    
    case '+':
        cout << "The answer of addition: ";
        fraction1.add(tu1, tu2, mau1, mau2);
        break;
    case '-':
        cout << "The answer of Subtraction: ";
        fraction1.minus(tu1, tu2, mau1, mau2);
        break;
    case '*':
        cout << "The answer of Multiplication: ";
        fraction1.multiply(fraction1.numerator, fraction2.numerator, fraction1.denominator, fraction2.denominator);
        break;
    }
    return 0;
}

