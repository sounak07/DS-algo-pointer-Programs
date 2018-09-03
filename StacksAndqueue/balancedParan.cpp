#include <stack>

bool checkBalanced(char *exp) {
	// Write your code here
  stack<char> s;
  char x;


  for(int i=0;exp[i] != '\0';i++){

    if(exp[i] == '{' || exp[i] == '[' || exp[i] == '('){

     s.push(exp[i]);

    }

    else if(exp[i] == '}' || exp[i] == ']' || exp[i] == ')'){


      if(s.empty()) return false;

    switch (exp[i])
        {
        case ')':

            // Store the top element in a
            x = s.top();
            s.pop();
            if (x=='{' || x=='[')
                return false;
            break;

        case '}':

            // Store the top element in b
            x = s.top();
            s.pop();
            if (x=='(' || x=='[')
                return false;
            break;

        case ']':

            // Store the top element in c
            x = s.top();
            s.pop();
            if (x =='(' || x == '{')
                return false;
            break;
        }
    }

    }

  return (s.empty());

} 
