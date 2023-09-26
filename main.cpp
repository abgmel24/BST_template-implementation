#include "BST.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    BST<int> *t = new BST<int>();

    t->insert(8);
    t->insert(12);
    t->insert(10);
    t->insert(13);
    t->insert(14);
    t->insert(4);
    t->insert(7);
    t->insert(3);
    t->insert(5);
    t->printTree();

    t->remove(12);
    t->printTree();
}