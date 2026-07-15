#include "LinkedList.hpp"
#include <iostream>
#include <string.h>

int main(){

    std::cout << "Lista jednokierunkowa: \n";
    int switch_value, value;
    LinkedList list;
    while(true){
        std::cout << "0 - dodaj wartosc"<< std::endl;
        std::cout << "1 - usun wartosc"<< std::endl;
        std::cout << "2 - pokaz wszystko"<< std::endl;
        std::cout << "3 - znajdz wartosc"<< std::endl;
        std::cout << "4 - usun wszystko"<< std::endl;
        std::cout << "5 - end"<< std::endl;
        std::cin >> switch_value;
        switch(switch_value){
            case 0: // add
                std::cin >> value;
                
                list.add_value(value);
                
            break;

            case 1: // del value
                std::cin >> value;
                
                list.remove_value(value);
                
            break;

            case 2: // show all
                list.show_all();
            break;
            
            case 3: // find value
                std::cin >> value;
                
                list.get_value(value);
                
            break;

            case 4: // del all
                list.remove_all();
            break;
            
            case 5: // end program
                list.remove_all();
                return 0;

        }
    }
}