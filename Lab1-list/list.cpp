#include "list.hpp"
#include <iostream>
#include <cassert>

int main() {
    DM852::List* l1;
    std::cout << "List size: " << l1->size() << "\n";
    assert(l1->size() == 0);
    assert(l1->is_empty());
    DM852::List l2;
    assert(l2.size() == 0);
    assert(l2.is_empty());
    assert(*l1==l2);
    DM852::List l3;
    assert(l3==l2);
}