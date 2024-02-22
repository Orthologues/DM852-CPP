#ifndef LIST_HPP
#define LIST_HPP

#include <string>

namespace DM852 {
    class List {

        // nested struct
        struct Node {
            public:
                std::string data;
                Node *next;
                Node *prev;
        };
            
        // declaring constructors
        public:
            // default constructor
            List() = default;
            // destructor
            // ~List();
            // copy constructor
            List(const List& other); // no member initializer list

        // declaring member functions
        public:
            // getter method to a private member of the struct
            int size () const {
                return size_;
            }
            bool is_empty () const {
                return size_ == 0;
            }
            bool operator==(const List& list2) const {
                // Compare the lists element-wise
                if (this->size() != list2.size()) {
                    return false;
                }

                Node* lNode = this->getHead();
                Node* rNode = list2.getHead();
                while (lNode != nullptr) {
                    if (lNode->data != rNode->data) {
                        return false;
                    }
                    lNode = lNode->next;
                    rNode = rNode->next;
                }
                return true;
            }
            Node* getHead() const {
                return head;
            };

        private:
            Node *head = nullptr;
            Node *tail = nullptr;
            int size_ = 0;
    };
};

#endif // LIST_HPP