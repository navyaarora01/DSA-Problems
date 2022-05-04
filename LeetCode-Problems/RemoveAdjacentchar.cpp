// You are given a string s consisting of lowercase English letters.
//  A duplicate removal consists of choosing two adjacent and equal letters and removing them.
// We repeatedly make duplicate removals on s until we no longer can.
// Return the final string after all such duplicate removals have been made. 
// It can be proven that the answer is unique.

class Solution {
public:
    string removeDuplicates(string s) {
        stack <char> st;
        int n = s.size();
        int i = 0;
        while(i<n){
            if(st.empty() || s[i]!=st.top()){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
            i++;
        }
        string ans = "";
        while(!st.empty()){
            char ele = st.top();
            st.pop();
            ans  += ele;
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};