
//?  [Problem Definition]
//*     Write a program that asks for the weight of the package and
//*     the distance it is to be shipped, and then displays the charges.
//*
//*  The Fast Freight Shipping Company charges the following rates:
//*     Weight of Package (in Kilograms)          Rate per 500 Miles Shipped
//*        2 kg or less                              $1.10
//*        Over 2 kg but not more than 6 kg          $2.20
//*        Over 6 kg but not more than 10 kg         $3.70
//*        Over 10 kg but not more than 20 kg        $4.80
//*
//** Input Validation :
//* 	Do not accept values of 0 or less for the weight of the package.
//* 	Do not accept weights of more than 20 kg (this is the maximum weight the company will ship).
//* 	Do not accept distances of less than 10 miles or more than 3,000 miles.
//*     These are the company's minimum and maximum shipping distances.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double RATE2  = 1.10;
    const double RATE6  = 2.20;
    const double RATE10 = 3.70;
    const double RATE20 = 4.80;
    double weight, distance, dRate, price;

    cout << "Enter the package weight and distance:\n";
    cin >> weight >> distance;
    if ((weight <= 0 or weight > 20) || (distance < 10 or distance > 3000)){
        cout << "Not accepted, input a weight > 0 and <= 20 and a distance >= 10 and <= 3000." << endl;
    }
    // TODO: validate input - weight must be > 0 and <= 20
    // TODO: validate input - distance must be >= 10 and <= 3000
    else if (weight > 0 and weight <= 20){
        if (weight > 0 and weight <= 2){
            dRate = RATE2;
        }
        else if (weight > 2 and weight <=6){
            dRate = RATE6;
        }
        else if (weight > 6 and weight <= 10){
            dRate = RATE10;
        }
        else if (weight > 10 and weight <= 20){
            dRate = RATE20;
        }
    }
    if (distance <= 500){
        price = dRate;
    }
    else if (distance <= 1000){
        price = dRate*2;
    }
    else if (distance <= 1500){
        price = dRate*3;
    }
    else if (distance <= 2000){
        price = dRate*4;
    }
        else if (distance <= 2500){
        price = dRate*5;
    }
        else if (distance <= 3000){
        price = dRate*6;
        }
    // TODO: determine rate based on weight

    // TODO: calculate price based on distance

    // Use the following statements to print output
    cout << setprecision(2) << fixed;
    cout << "The shipping price for package is: $" << price << endl;

    return 0;
}
