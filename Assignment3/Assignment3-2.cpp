#include <iostream>

int main() {

    double males;
    double females;
    double total;

    std::cout << "How many males and females are in the class?\n";
    std::cout << "Males: \n";
    std::cin >> males;
    std::cout << "Females: \n";
    std::cin >> females;

    total = males + females;
    double percentage_males = males / total * 100;
    double percentage_females = females / total * 100;

    std::cout << "\nThere are " << total << " students total.\n";
    std::cout << "The class is " << percentage_males << "% male.\n";
    std::cout << "The class is " << percentage_females << "% female.\n";

}
