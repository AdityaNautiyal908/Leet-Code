#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
};

Node *head, *first,*second,*third,*four,*five;


class Solution {
    public:
    Node* middleNode(Node *head){
        Node *ptr=head;
        int len = 0;
        while(ptr!=NULL){
            len++;
            ptr=ptr->next;
        }

        int mid = len/2;
        Node *temp = head;
        int cnt=0;
        while(cnt<mid){
            temp=temp->next;
            cnt++;
        }
        return temp;
    }
};


int main(){
    Solution obj;

    first= new Node();
    second= new Node();
    third= new Node();
    four= new Node();
    five= new Node();

    head=first;

    first->data=1;
    first->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=four;

    four->data=4;
    four->next=five;

    five->data=5;
    five->next=nullptr;

    Node* middle = obj.middleNode(head);
    cout<< "The middle node data is : "<<middle->data<<endl;

    return 0;
}