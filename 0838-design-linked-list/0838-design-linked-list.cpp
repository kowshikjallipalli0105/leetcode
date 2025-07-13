#include<bits/stdc++.h>
using namespace std;
class MyLinkedList {
private:
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(nullptr){}
};
ListNode* head;
int size;
public:
    MyLinkedList() {
        head=nullptr;
        size=0;
    }
    
    int get(int index) {
        if(index<0 ||index>=size) return -1;
        ListNode* temp=head;
        for(int i=0;i<index;i++){
            temp=temp->next;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        ListNode* Node = new ListNode(val);
        Node->next=head;
        head=Node;
        size++;
    }
    
    void addAtTail(int val) {
        ListNode* node = new ListNode(val);
        if(!head){
            head=node;
        }else{
            ListNode* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=node;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index<0 || index>size) return;
        if(index==0){
            addAtHead(val);
            return;
        }
         if (index == size) {
            addAtTail(val);
            return;
        }

        ListNode* node = new ListNode(val);
        ListNode* temp = head;
        for(int i=0;i<index-1;i++){
            temp=temp->next;
        }
        node->next = temp->next;
        temp->next = node;
        size++;
        
    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;

        if (index == 0) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        } else {
            ListNode* curr = head;
            for (int i = 0; i < index - 1; i++) {
                curr = curr->next;
            }
            ListNode* temp = curr->next;
            curr->next = temp->next;
            delete temp;
        }
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */