/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */

Node* constructLL(vector<int>& arr) {
    // Write your code here
    int n=arr.size();
    Node*parent=new Node(arr[0]);
    Node*head=parent;
    for(int i=1;i<n;i++){
        Node*temp=new Node(arr[i]);
        parent->next=temp;
        parent =temp;
    }
    return head;

}
