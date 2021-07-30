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

    if (curPtr != nullptr)
    {
        cout << "curPtr is not NULL" << endl;
    }

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
    //    Node<ItemType> *curPtr = headPtr;

    int i = 0;

    //    unique_ptr<Node<ItemType>> samplePtr{make_unique<Node<ItemType>>()};
    shared_ptr<Node<ItemType>> cPtr = make_shared<Node<ItemType>>();
    //shared_ptr<Node<ItemType>> headPtr{cPtr};
    shared_ptr<Node<ItemType>> head;

    //unique_ptr<Node<ItemType>> ccPtr(new Node<ItemType>());
    shared_ptr<LinkedBag<ItemType>> hPtr;

    cPtr->setNext(headPtr);

    //cPtr = getPointerTo(headPtr);
    //cPtr = getPointerTo(headPtr);
    /*
    cPtr->setItem("Money");
    cout << "message > " << cPtr->getItem() << endl;
    */

    cout << "--->" << cPtr << endl;

    //   cout << "Sample Pointer: " << samplePtr->getNext() << endl;

    //  samplePtr->setItem(newEntry);
    // cout << "SSSAAAMMMPPPLLLEEE: " << samplePtr->getItem() << endl;
    if (cPtr != nullptr)
    {
        cout << "cPtr is NOT NULL" << endl;
        cout << "Item Count" << itemCount << endl;
    }
    else
    {
        cout << "cPtr is NULL - damn!" << endl;
    }

    cout << "newEntry: " << newEntry << endl;

    while ((cPtr != nullptr) && (i <= itemCount))
    {
        if (i == itemCount - 1)
        {
            add(newEntry);
            //add(newEntry);
            return 1;
        }
        else
        {
            //cPtr = cPtr->getNext();
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