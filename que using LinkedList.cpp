//correct this cpp code for que to enque value, deque and display que
#include <iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
	
	Node(int val){
		data = val;
		next = NULL;
	}
};

class que{
	public:
		Node* rear;
		Node* front;
		
		que(){
			front = NULL;
			rear = NULL;
		}
		
		void enque(int item){
			Node* newnode = new Node(item);
			if (isempty()){
				front = rear = newnode;
			}
			rear -> next = newnode;
			rear = newnode;
		}
		
		void deque(){
			Node* temp = front;
			if (isempty()){
				cout<<"No element in the list to deque"<<endl;
				return;
			}
			if (front == rear){
				front = rear = NULL;
			}
			front = front -> next;
			delete temp;
		}
		
		bool isempty(){
			if (front == NULL && rear == NULL){
				return true;
			}
			else false;
		}
		
		void peek(){
			if (isempty()){
				cout<<"Que is empty"<<endl;
			}
			else{
				cout<<"Peak value is: "<<front->data;
			}
		}
		
		void display(){
			Node* temp = front;
			if (isempty()){
				cout<<"Que is empty"<<endl;
			}
			else if(front == rear){
				cout<<temp->data;
			}
			else{
			while(temp != rear){
				cout<<temp->data<<" ";
				temp = temp -> next;
			}
			cout<<endl;
		}
	}
};
//
//int main(){
//	que q;
//	q.enque(20);
//	q.enque(89);
//	q.enque(34);
//	q.display();
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node* next;
//
//    Node(int val) {
//        data = val;
//        next = NULL;
//    }
//};
//
//class que {
//public:
//    Node* rear;
//    Node* front;
//
//    que() {
//        front = NULL;
//        rear = NULL;
//    }
//
//    void enque(int item) {
//        Node* newnode = new Node(item);
//        if (isempty()) {
//            front = rear = newnode;
//        } else {
//            rear->next = newnode;
//            rear = newnode;
//        }
//    }
//
//    void deque() {
//        if (isempty()) {
//            cout << "No element in the queue to dequeue" << endl;
//            return;
//        } else {
//            Node* temp = front;
//            front = front->next;
//            delete temp;
//        }
//    }
//
//    bool isempty() {
//        return front == NULL;
//    }
//
//    void peek() {
//        if (isempty()) {
//            cout << "Queue is empty" << endl;
//        } else {
//            cout << "Peek value is: " << front->data << endl;
//        }
//    }
//
//    void display() {
//        if (isempty()) {
//            cout << "Queue is empty" << endl;
//        } else {
//            Node* temp = front;
//            while (temp != NULL) {
//                cout << temp->data << " ";
//                temp = temp->next;
//            }
//            cout << endl;
//        }
//    }
//};

int main() {
    que q;
    q.enque(20);
    q.enque(89);
    q.enque(34);
    q.display();
    q.peek();
    q.deque();
    q.display();
    return 0;
}

