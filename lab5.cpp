#include <iostream>
#include <vector>
int main()
{
    std::vector< int >           v{1, 2, 3};
    std::vector< int >::iterator it = v.begin();

    // Jawnie drukujemy zawartość wektora
    std::cout << *it++;
    std::cout << *it++;
    std::cout << *it;
    std::vector< std::string > vs;             // pusty wektor stringów
    std::string                wyraz{"słowo"}; // przykładowy string
    vs.push_back(wyraz);                       // dodaj kopię istniejącego stringa do wektora
    wyraz += " drugie słowo";                  // obiekt wyraz istnieje niezależnie
    vs.emplace_back("trzecie słowo");
    
}
