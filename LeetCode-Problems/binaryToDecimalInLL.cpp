// Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. 
// The linked list holds the binary representation of a number.

class Solution {
public:
    int binaryToDecimal(string s){
        int dec = 0;
        int pv = 1;
        int n = (int)s.length();
        for(int i = n-1;i>=0;i--){
            if(s[i]=='1'){
                dec += pv;
            }
            pv = pv*2;
        }
        return dec;
    }
    int getDecimalValue(ListNode* head) {
        string s;
        while(head!=NULL){
            int data = head->val;
            char  x = (data == 1)? '1' : '0';
            s +=x;
            head = head->next;
        }
        int ans = binaryToDecimal(s);
        return ans;
    }
};
 