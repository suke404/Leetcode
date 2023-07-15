/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> map;
        Node* cursor = head;
        while(cursor != nullptr)
        {
            Node* temp = new Node{cursor->val, nullptr, nullptr};
            map[cursor] = temp;
            cursor = cursor -> next;
        }
        Node* c = head;
        while(c != nullptr)
        {
            if(c -> next != nullptr)
                map[c]->next = map[c->next];
            if(c -> random != nullptr)
                map[c]->random = map[c->random]; 
            c = c -> next;
        }

    return map[head];
    }
};