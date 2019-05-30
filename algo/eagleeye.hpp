#ifndef eagleeye_hpp
#define eagleeye_hpp

#include <iostream>
#include "../util/timer.hpp"

using namespace std;

class EagleEye
{
private:
    struct Node
    {
        int data;
        Node* up = NULL;
        Node* right = NULL;
        Node* down = NULL;
        Node* left = NULL;
    };
    string map;
    int start, end, spacing;
    Node* startNode;
    Node** nodeReferences;
    void generateMap();
    void checkNodeSurroundings(Node* node, int index);
    bool isJunction(int index);
public:
    EagleEye(string map, int start, int end, int spacing);
    void run();
};

#endif