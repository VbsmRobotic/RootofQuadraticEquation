#include<iostream>
#include<cmath>

using namespace std ;

template<class T>


//RQE = root of Quadratic Equation  aX^2 + b X + c = 0   r1,2 = (-b +-(b^2 - 4ac)^0.5 )/(2*a)

T  RQE(T a, T b, T c)
{       double r_1, r_2, r ;
        double base = ((b*b)- (4*a*c)) ;
        double exponent = 0.5 ; 
        double Delta = pow(base, exponent) ;
        cout << "Delta : " << Delta << endl ;

        if(Delta > 0)
        {
            r_1 = (-b + Delta)/(2*a) ;
            r_2 = (-b - Delta)/(2*a) ;
            cout << "Roots" << "[" << r_1 << ";" << r_2 << "]" << endl ;

        }else if(Delta == 0)
        {
            r_1 = (-b + Delta)/(2*a) ;
            r_2 = r_1 ;
            cout << "Roots" << "[" << r_1 << ";" << r_2 << "]" << endl ;

        }else
        {
            base = abs(base)/(2*a) ;
            r = -b/(2*a) ;             
            cout << "Roots" <<"["<< r << "+ j" <<base <<";" << r << "- j" <<base <<"]"<< endl ;
        } 
    }


int main()
{
    double x, y, z ;
    cout << "Enter x*X^2 + y*X + z : " << endl ;
    cin >> x >> y >> z ;
    cout << x << "X^2 " << "+ " << y << "X" << "+ " << z << endl ;
    RQE(x, y, z) ; 
}