#include "header.h"

int main() {
    double a, b, c;
    cout << "Please input a, b, c (a should be non-zero): ";
    cin >> a >> b >> c;
    find_roots(a, b, c);
}

double root_equation(double a, double b, double discriminant, double sign) {
    if(sign)
        return (-b+discriminant)/(2*a);
    else
        return (-b-discriminant)/(2*a);
}

void find_roots(double a, double b, double c) {

    double discriminant = sqrt(pow(b,2) - 4*a*c);


    if(discriminant > 0) {
        double root1 = root_equation(a, b, discriminant, 1);
        double root2 = root_equation(a, b, discriminant, 0);
        cout << "The roots are " << root1 << " and " << root2 << ".\n";
    }

    else if(discriminant == 0)
        cout << "The root is " << -b/(2*a) << ".\n";

    else
        cout << "There are no real roots.\n";
}