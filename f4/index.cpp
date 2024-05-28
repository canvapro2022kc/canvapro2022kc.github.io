#include <iostream>
#include <cstdlib>
using namespace std;

[2] int* mytype;

int main(){
    [1] p1, p2;
    p1=[3] int;
    *p1=100;
    p2=new[9]
    [4]=175;
    cout << "original values: " << [5] << ", " << *p2 << endl;
    [6] p3;
    p3=[7];
    p1=p2;
    [8] = p3;
    cout << "after sapping " << *p1 << ", " << [10] << endl;
    system("pause")
}

void FloatList::appendNode(float num){
    ListNode *newNode, *nodePtr;
    newNode = new ListNode;
    newNode->value[1];
    newNode->[2];
    if([3]){
        head = newNode;
        else{
            nodePtr = head;
            while(nodePtr->[4]){
                nodePtr = nodePtr->next;
            }NodePtr-next[5];
        }
    }
    cout << endl << "input has been successfully appended" << endl;
}

class intQueue{
    private: int *queueArray;
    int queueSize;
    int front;
    int rear;
    int numItems;

    public:
    IntQueue(int);
    ~IntQueue();
    void enqueue(int);
    void dequeue(int &);
    bool isEmpty();
    bool isFull();
    void clear();
};

struct crew{
    int hc; int st; int et;
};

struct guest{
    int h; int t;
};

int main(){
    crew *Crew;
    guest Guest;
    queue<guest>GuestLine;
    int H, C, Q;
    crew = new crew[C];
    cout << endl << "crew Information: " << endl;
    for(int i = 0; i < c; i++){
        cin >> Crew[i].hc >> Crew[i].st >> Crew[i].et;
    }
    cout << endl << "guest information: " << endl; << endl;
    for (int i = 0; i < Q; i++){
        cin >> Guest.h >> Guest.t;
        GuestLine.push(Guest);
    }
    while(!GuestLine.empty()){
        Guest = GuestLine.front();
        cout << Guest.h << " " << Guest.t << endl;
        GuestLine.pop();
    }
}