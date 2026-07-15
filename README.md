# Lista Jednokierunkowa (Singly Linked List) w C++

Prosta implementacja dynamicznej listy jednokierunkowej w języku C++. 

## 🚀 Funkcjonalności
* **Dodawanie elementów (`add_value`)** - dołączanie nowych węzłów na koniec listy.
* **Usuwanie elementów (`remove_value`)** - bezpieczne usuwanie węzła o określonej wartości i naprawianie połączeń.
* **Wyszukiwanie (`get_value`)** - sprawdzanie czy element istnieje w strukturze.
* **Czyszczenie (`remove_all`)** - zwalnianie całej zaalokowanej pamięci.
* **Wyświetlanie wszystkich elementów (`show_all`)** - Wyświetla wszystkie elementy w liście.
* **Automatyczne sprzątanie** - dzięki destruktorowi, program sam zwalnia całą pamięć przy wyjściu lub nagłym zamknięciu.

## 🛠️ Struktura projektu
* `src/LinkedList.hpp` - deklaracja klasy `LinkedList` oraz prywatnej struktury `Node`.
* `src/LinkedList.cpp` - implementacja całej logiki biznesowej i zarządzania pamięcią.
* `src/main.cpp` - kod testowy prezentujący działanie listy.

## 💻 Jak uruchomić?

### Wymagania
* Kompilator C++ (np. `g++` z pakietu MSYS2/MinGW)

### Kompilacja i uruchomienie z konsoli:
Wejdź do folderu `src` i wpisz w terminalu:
```bash
g++ main.cpp LinkedList.cpp -o program
./program
```
## 👤 Autor

* **Radosław Matuszewski** 
