#include <iostream>

int main() {
    // Declare variables
    double b, r, c;
    int N;

    // Define base cost, revenue per sale and cost per make
    std::cout << "Enter the amount of dollars for the company base cost: ";
    std::cin >> b;

    std::cout << "Enter how much money is made per device sale: ";
    std::cin >> r;

    std::cout << "Enter how much it costs to make each device. This number should be less than revenue per sale.: ";
    std::cin >> c;

    
    // Equation for number of devices needed to be sold
    N = b / (r - c);

    // Result output
    std::cout << "In order to have a non-negative net profit, aka break zero, the amount of devices we must sell is: " << N << std::endl;
   
    return 0;
}
