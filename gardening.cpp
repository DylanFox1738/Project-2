#include <iostream>

int main() {
    // Declare variables
    double n1, n2, n3, k1, k2, k3, p1, p2, p3;
    double M1, M2, M3, N, K, P;

    // Prompt user for input
    std::cout << "Enter the proportion of nitrogen in indgredient 1: ";
    std::cin >> n1;

    std::cout << "Enter the proportion of nitrogen in indgredient 2: ";
    std::cin >> n2;

    std::cout << "Enter the proportion of nitrogen in indgredient 3: ";
    std::cin >> n3;

    std::cout << "Enter the proportion of potasium in indgredient 1: ";
    std::cin >> k1;

    std::cout << "Enter the proportion of potasium in indgredient 2: ";
    std::cin >> k2;

    std::cout << "Enter the proportion of potasium in indgredient 3: ";
    std::cin >> k3;

    std::cout << "Enter the proportion of phosphorus in indgredient 1: ";
    std::cin >> p1;

    std::cout << "Enter the proportion of phosphorus in indgredient 2: ";
    std::cin >> p2;

    std::cout << "Enter the proportion of phosphorus in indgredient 3: ";
    std::cin >> p3;

    // Calculate M1, M2, and M3
    M1 = (k3 - n3 + (n3 - n2 + k2 - k3) * ((p3 - n3) / (n2 - n3 + p3 - p2))) / (k3 - n3 + n1 - k1 + (n3 - n2 + k2 - k3) * ((n1 - n3 + p3 - p1) / (n2 - n3 + p3 - p2)));
    M2 = (p3 - n3 - M1 * (n1 - n3 + p3 - p1)) / (n2 - n3 + p3 - p2);
    M3 = 1 - M1 - M2;

    // Calculate N, K, and P
    N = M1 * n1 + M2 * n2 + M3 * n3;
    K = M1 * k1 + M2 * k2 + M3 * k3;
    P = M1 * p1 + M2 * p2 + M3 * p3;

    // Print the results
    std::cout << "The proportion of indgredient 1 in the new fertilizer is: " << M1 << std::endl;
    std::cout << "The proportion of indgredient 2 in the new fertilizer is: " << M2 << std::endl;
    std::cout << "The proportion of indgredient 3 in the new fertilizer is: " << M3 << std::endl;

    std::cout << "The total proportion of Nitrogen in the new fertilizer is: " << N << std::endl;
    std::cout << "The total proportion of Nitrogen in the new fertilizer is: " << K << std::endl;
    std::cout << "The total proportion of Nitrogen in the new fertilizer is: " << P << std::endl;

    return 0;
}
