#include <iostream>
#include <cmath>
int main(){
    int a;
    int b;
    int c;

std::cout <<"Taking ax^2 + bx +c as a general quadratic equation. Fill in the values of a,b and c below." <<"\n";

    std::cout << "a = ";
        std::cin >> a;
    std::cout << "b = ";    
        std::cin >> b;
    std::cout << "c = ";
        std::cin  >> c;

        int Discriminant;
            Discriminant = b*b - (4*a*c) ;
    if(Discriminant < 0){
        std::cout << "THIS EQUATION HAVE IMAGINARY ROOTS!!!" <<"\n";
    }
    else{
    float root1;
        root1 = (-b + sqrt(Discriminant))/2*a;
    float root2;
        root2 = (-b - sqrt(Discriminant))/2*a;

            std::cout <<"Roots of the given quadratic equation = " <<root1 <<" and " <<root2 <<"."<<"\n";
    }

}
