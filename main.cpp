#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#include <iostream>

int main()
{
    char a;
    std::cout << "Napisz liczbe zdjec: " << endl;
    cin >> a;
    srand (time(NULL));
    std::cout << "Wylosowano " << ((std:: rand() % a) + 1) << std:: endl;
    int liczba =( std::rand() % a) +1;

    return 0;
}