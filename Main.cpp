
#include <iostream>
#include "clsDblLinkedList.cpp"

using namespace std;

int main()
{
    clsDblLinkedList<int> MydblLinkedList;

    // Check if List Is Empty
    if (MydblLinkedList.IsEmpty())
        cout << "\nYes, List Is Empty";
    else
        cout << "\nNo, List Is Not Empty";

    // Insert At Beginning
    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    cout << "\n\nLinked List Content:\n";
    MydblLinkedList.PrintList();

    // Find Node
    clsDblLinkedList<int>::Node* N1 = MydblLinkedList.Find(2);

    if (N1 != NULL)
    {
        cout << "\nNode with value 2 is Found :-)";

        // Insert After Node
        MydblLinkedList.InsertAfter(N1, 500);

        cout << "\n\nAfter Inserting 500 after 2:\n";
        MydblLinkedList.PrintList();
    }
    else
        cout << "\nNode Is Not Found :-(\n";

    // Insert At End
    MydblLinkedList.InsertAtEnd(700);

    cout << "\n\nAfter Inserting 700 at End:\n";
    MydblLinkedList.PrintList();

    // Delete Node
    clsDblLinkedList<int>::Node* N2 = MydblLinkedList.Find(4);

    if (N2 != NULL)
        MydblLinkedList.DeleteNode(N2);

    cout << "\n\nAfter Deleting 4:\n";
    MydblLinkedList.PrintList();

    // Delete First Node
    MydblLinkedList.DeleteFirstNode();

    cout << "\n\nAfter Deleting First Node:\n";
    MydblLinkedList.PrintList();

    // Delete Last Node
    MydblLinkedList.DeleteLastNode();

    cout << "\n\nAfter Deleting Last Node:\n";
    MydblLinkedList.PrintList();

    // Size
    cout << "\n\nLinked List Content:\n";
    MydblLinkedList.PrintList();

    cout << "\nNumber of Items in The Linked List = "
         << MydblLinkedList.Size() << "\n";

    // Check if List Is Empty
    if (MydblLinkedList.IsEmpty())
        cout << "\nYes, List Is Empty";
    else
        cout << "\nNo, List Is Not Empty\n";

    // Get Node
    clsDblLinkedList<int>::Node* N = MydblLinkedList.GetNode(2);

    if (N != NULL)
        cout << "\nNode Value Is: " << N->value;
    else
        cout << "\nNode Not Found!";
    // Get Item
        cout<<"\nItem (2) Value is : "<<MydblLinkedList.GetItem(2);

    // Updat Item
        MydblLinkedList.UpdateItem(2 , 600);

        cout<<"\nAfter Updating Item (2) : \n";
        MydblLinkedList.PrintList();

    //After Ansert
    MydblLinkedList.InsertAfter(1 , 500);

    cout<<"\nAfter Ansert : \n";
    MydblLinkedList.PrintList();

    // Reverse
    MydblLinkedList.Reverse();

    cout << "\n\nLinked List Content After Reverse:\n";
    MydblLinkedList.PrintList();

    // Clear
    cout << "\n\nExecuting .Clear()";

    MydblLinkedList.Clear();

    cout << "\nNumber of Items in The Linked List = "
         << MydblLinkedList.Size() << "\n";

    system("pause>0");

    return 0;
}
