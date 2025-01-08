class node{
public:
    int val;
    node* next;
    
    node(int data, node* ptr=NULL) {
        val=data;
        next=ptr;
    }
};

class MyLinkedList {
public:
    node* head=NULL;
    int size=0;
    
    MyLinkedList() {
        
    }

    int get(int index) {
        int i=0;
        node* temp=head;
        while(i<=index && temp){
            if(index==i) return temp->val;
            temp=temp->next;
            i++;
        }
        return -1;
    }
    
    void addAtHead(int val) {
        node* temp=new node(val);
        temp->next=head;
        head=temp;
        size++;
    }
    
    void addAtTail(int val) {
        node* temp=head,*newNode=new node(val);
        if(head==NULL){
            head=newNode;
            size++;
            return ;
        }
        while(temp->next){
            temp=temp->next;
        }
        temp->next=newNode;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(size < index || index<0) return ;
        node* newNode=new node(val);
        node* temp=head;
        if(index==0){
            addAtHead(val);
            return;
        }
        if (index == size) {
            addAtTail(val);
            return;
        }
        int i=0;
        while(i<index-1 && temp){
            temp=temp->next;
            i++;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if(size <= index || index<0) return ;
        node* temp=head;
        if(index==0 && head){
            head=head->next;
            size--;
            return ;
        }
        int i=0;
        while(i<index-1 && temp->next){
            temp=temp->next;
            i++;
        }
        if (temp && temp->next) {
            node* last=temp->next;
            temp->next=last->next;
            last->next=NULL;
            size--;
        }
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
