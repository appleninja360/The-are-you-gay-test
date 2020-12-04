#include <iostream>

    int startGame = 0, gender = 0, test = 0;

int main() {


    std::cout << "================\n";

    std::cout << "Are you gay test\n";
    std::cout << "================\n\n";

    std::cout << "Are you ready?\n\n";
    std::cout << "1 Yes\n";
    std::cout << "2 No\n";

    std::cout << "Enter your answer (1-2): \n";
    std::cin >> startGame;


    if (startGame = 1) {

        std::cout << "\nWhat is you gender\n\n";
        std::cout << "1 male\n";
        std::cout << "2 female\n";

        std::cout << "Enter your answer (1-2): \n";
        std::cin >> gender;

        if (gender = 1){
            std::cout << "\nDo you like men?\n\n";

            std::cout << "(1) No!\n";
            std::cout << "(2) Mabey\n";
            std::cout << "(3) Yes\n";

            std::cout << "Enter your answer (1-3): \n";
            std::cin >> test;

            if (test == 1) {
                std::cout << "\nYou are not gay. Yet ;)\n";
                }
            else if (test == 2) {
                std::cout << "\nYou might be gay.\n";
                }
            else if (test == 3) {
                std::cout << "\nYou are gay.\n";
                }
            else {
                std::cout << "\nInvalid input\n";
                }
        }

        else if (gender = 2){

            std::cout << "\nDo you like wemen?\n\n";
            std::cout << "(1) No!\n";
            std::cout << "(2) Mabey\n";
            std::cout << "(3) Yes\n";

            std::cout << "Enter your answer (1-3): \n";
            std::cin >> test;

            if (test == 1) {
                std::cout << "\nYou are not gay. Yet ;)\n";
                }
            else if (test == 2) {
                std::cout << "\nYou might be gay.\n";
                }
            else if (test == 3) {
                std::cout << "\nYou are gay.\n";
                }
            else {
                std::cout << "\nInvalid input\n";
                }
        }

    }
    else {
        //quit
        std::cout << "quit";
    }
}
