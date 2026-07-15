#include "LinkedList.hpp"
#include <iostream>

LinkedList::LinkedList() : head(nullptr) {}

void LinkedList::get_value(int value){
    if(head == nullptr){
        std::cout << "Error, there is no list";
        return;
    }
    Node* node = head;
    while(true){
        
        if(node->data == value) {
            std::cout << "value "<< value << "is in the list on pointer: "<< node<< std::endl;
            return;
        }
        else{
            if(node->next == nullptr){
                std::cout << "There is no value \"" << value << "\" on the list"<< std::endl;
                return;
            }else{
            node = node->next;
            }
        }

    }

}
void LinkedList::add_value(int value){
    Node* node = new Node(value);
    if(nullptr == head){
        head = node;
        return;
    }
    
    Node* Head = head;
    while(true){
        if(nullptr == Head->next){
            Head->next = node;
            return;
        }
        else 
            Head = Head->next;
    }
}
    
void LinkedList::remove_value(int value){
    if(head == nullptr){
        std::cout << "Error, there is no list";
        return;
    }
    Node* previous = nullptr;
    Node* node = head;
    while(true){
        if(node->data == value) {
            std::cout << "value "<< value << " was in the list on pointer: "<< node <<std::endl;
            if (previous == nullptr){
                previous = node;
                node = node->next;
                previous->next = nullptr;
                delete previous;
                head = node;
            }
            else{
                previous->next = node->next;
                node->next = nullptr;
                delete node;
            }
            return;
        }
        else{
            if(node->next == nullptr){
                std::cout << "There is no value \"" << value << "\" on the list"<<std::endl;
                return ;
            }else{
                previous = node;
                node = node->next;
            }
        }

    }

}

void LinkedList::show_all(){
    if(head == nullptr){
        std::cout << "Error, there is no list"<<std::endl;
        return;
    }
    Node* node = head;
    while(true){
        std::cout << node->data << ">>";
        if(node->next == nullptr){
            std::cout <<std::endl;
            return;
        }
        else 
            node = node->next;
    }
}

void LinkedList::remove_all(){
    if(head == nullptr){
        std::cout << "Error, there is no list"<<std::endl;
        return;
    }
    Node* helper;
    Node* node = head;
    while(node != nullptr){
        helper = node->next;
        delete node;
        node = helper; 
    }
    head = nullptr; 
}

LinkedList::~LinkedList(){
}