#include <iostream>
#include <iomanip>
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/math/constants/constants.hpp>

// Универсальный тип десятичной точности на 1000 знаков:
using BigFloat =
    boost::multiprecision::number<boost::multiprecision::cpp_dec_float<1000>>;

int main() {
    int digits;
    std::cout << "Enter number of digits after decimal (max 1000): ";
    std::cin >> digits;

    if (digits < 1 || digits > 1000) {
        std::cout << "Please enter a number between 1 and 1000.\n";
        return 1;
    }

    // π из Boost (точность задаётся типом BigFloat)
    BigFloat pi = boost::math::constants::pi<BigFloat>();

    std::cout << std::fixed << std::setprecision(digits) << pi << '\n';
    return 0;
}