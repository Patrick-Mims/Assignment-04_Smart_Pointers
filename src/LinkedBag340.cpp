#include "Node.h"
#include "LinkedBag.h"
#include <iostream>
#include <memory>
#include <ctime>

using namespace std;

template <typename ItemType>
bool LinkedBag<ItemType>::removeSecondNode340()
{
    static int i = 0;

    Node<ItemType> *curPtr = headPtr;

    while ((curPtr != nullptr) && (i < itemCount))
    {
        if (i == 1)
        {
            remove(curPtr->getItem());
        }
        else
        {
            curPtr = curPtr->getNext();
        }
        i++;
    }

    return 1;
}

template <typename ItemType>
bool LinkedBag<ItemType>::addEnd340(const ItemType &newEntry)
{
    int i = 0;

    /* I'm using a shared pointer, the professor showed this to the class */
    shared_ptr<Node<ItemType>> cPtr = make_shared<Node<ItemType>>();

    /* I am pointing cPtr to the headPtr so I can iterate */
    /* using a raw pointer, it would look like this: cPtr = headPtr; */
    cPtr->setNext(headPtr);

    while ((cPtr != nullptr) && (i <= itemCount))
    {
        if (i == itemCount - 1)
        {
            add(newEntry);
            return 1;
        }
        i++;
    }

    return 0;
}

template <typename ItemType>
ItemType LinkedBag<ItemType>::removeRandom340()
{
    Node<ItemType> *curPtr = headPtr;

    int cnt = 0;

    ItemType itemRemoved;
    static int randomItem;

    srand(time(NULL));
    randomItem = rand() % itemCount;

    while ((curPtr != nullptr) && (cnt <= itemCount))
    {
        if (cnt == randomItem)
        {
            itemRemoved = curPtr->getItem();
            remove(curPtr->getItem());
        }
        else
        {
            curPtr = curPtr->getNext();
        }
        cnt++;
    }
    return itemRemoved;
}

template <class ItemType>
int LinkedBag<ItemType>::getCurrentSize340Iterative() const
{
    int count = 0;
    vector<ItemType> bag = toVector();
    vector<string>::iterator it;
    for (it = bag.begin(); it != bag.end(); ++it)
    {
        count++;
    }
    return count;
}

template <class ItemType>
int LinkedBag<ItemType>::getCurrentSize340Recursive() const
{
    Node<ItemType> *curPtr = headPtr;
    return getCurrentSize340RecursiveHelper(curPtr);
}

/* private method */
template <typename ItemType>
int LinkedBag<ItemType>::getCurrentSize340RecursiveHelper(Node<ItemType> *cur) const
{
    int cnt = 0;
    while ((cur != nullptr) && (cnt < itemCount))
    {
        cnt++;
    }
    return cnt;
}

template <class ItemType>
int LinkedBag<ItemType>::getCurrentSize340RecursiveNoHelper() const
{
    Node<ItemType> *curPtr = headPtr;
    int cnt = 0;
    while ((curPtr != nullptr) && (cnt < itemCount))
    {
        cnt++;
    }
    return cnt;
}

template <class ItemType>
int getFrequencyOf340RecursiveNoHelper(const ItemType &theItem)
{
    cout << "Get Current Size 340 Recursive Helper: " << endl;
    static int count = 0;

    return count;
}

template <class ItemType>
int LinkedBag<ItemType>::getFrequencyOf340Recursive(const ItemType &value) const
{
    Node<ItemType> *curPtr = headPtr;
}

template <class ItemType>
int LinkedBag<ItemType>::getFrequencyOf340RecursiveNoHelper(const ItemType &) const
{
}