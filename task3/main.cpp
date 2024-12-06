#include <clocale>
#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"
#include "menu_items.hpp"

int main()
{
    std::setlocale(LC_ALL, "");

    const ioa::MenuItem* current = &ioa::MAIN;
    do {
        current = current->func(current);
    } while (true);

    return 0;
}