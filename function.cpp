// https://www.hackerrank.com/challenges/balanced-brackets/problem

string isBalanced(string s) {
    stack<char> list;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            list.push(s[i]);
        }
        else {
            if (list.empty()){
                return "NO";
            }
            
            if (list.top() == '(' && s[i] == ')') {
                list.pop();
            }
            else if (list.top() == '[' && s[i] == ']')
            {
                list.pop();
            }
            else if (list.top() == '{' && s[i] == '}') {
                list.pop();
            }
            else {
                return "NO";
            }
        }   
    }
    
    if (list.empty()) {
        return "YES";
    }
    else {
        return "NO";
    }
}
