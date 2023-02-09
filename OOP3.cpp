#include <iostream>
 
class Stack {
    class Node {
        public:
            int data;
            Node* next;
            Node(int data, Node* next);
            ~Node();
    }* head;
    public:
        Stack();
        Stack(const Stack& s);
        void operator=(const Stack& s);
        ~Stack();
        void push(int data);
        int peek() const;
        int pop();
};
 
Stack::Node::Node(int data, Node* next)
{
    this->data = data;
    this->next = next;
}
 
Stack::Node::~Node() { }
 
Stack::Stack() { head = NULL; }
 
Stack::Stack(const Stack& s)
{
    head = s.head;
}
 
void Stack::operator=(const Stack& s)
{
    head = s.head;
}
 
void Stack::push(int data)
{
    head = new Node(data, head);
}
 
int Stack::peek() const {
    if(head == 0)
    {
         std::cerr << "Stack empty!" << std::endl;
         return -1;
    }
    else
         return head->data;
}
 
int Stack::pop()
{
    if(head == NULL) return -1;
    int result = head->data;
    Node* oldNode = head;
    head = head->next;
    delete oldNode;
    return result;
}
 
Stack::~Stack()
{
    if(head != NULL)
    {
        while(head->next != NULL)
        {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
}
 
int main()
{
    Stack Integers;
    int value, num;
 
    std::cout << "Enter the number of elements ";
    std::cin >> num;
    while(num > 0)
    {
        std::cin >> value;
        Integers.push(value);
        num--;
    }
    while (( value = Integers.pop() ) != -1)
        std::cout << "Top element of stack  " << value << std::endl; 
}
