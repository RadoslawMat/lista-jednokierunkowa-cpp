#pragma once 

class LinkedList{
private:
    struct Node{ 
        int data;
        Node* next;
           
        Node(int value) : data(value), next(nullptr){}
        };

    Node* head;
    
public:

    LinkedList();
    ~LinkedList();
    /**
     * @brief Wyszukuje wartość w liście.
     * @param value Wartość typu int, która ma zostać wyszukana na liście.
     */
    void get_value(int value);
    /**
     * @brief Dodaje wartośc do listy.
     * @param value Wartość typu int, która ma zostać dodana do listy.
     */
    void add_value(int value);
    /**
     * @brief Usuwa wartość z lsity.
     * @param value Wartość typu int, która ma zostać usunięta z listy.
     */
    void remove_value(int value);
    /**
     * @brief pokazuje wszystkie wartości w liście.
     */
    void show_all();
    /**
     * @brief Usuwa wszystkie wartości z listy.
     * Po wywołaniu tej metody, head zostaje ustawione na nullptr.
     */
    void remove_all();
};

