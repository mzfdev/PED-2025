#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool isBalanced(const string& expression){
    stack<char> stack;

    for(char c : expression){
        if(c == '(' || c == '[' || c=='{'){
            stack.push(c);
        }

        else if(c == ')' || c == ']' || c=='}'){
            if(stack.empty()){
                return false;
            }

            char top = stack.top();
            stack.pop();

            if( (c == ')' && top != '(') || 
                (c == ']' && top != '[') || 
                (c == '}' && top != '{') ){
                return false;
            }
        }
    }
    return stack.empty();
}

int main(){
    string expression;
    cout<<"Ingrese una expresion: ";
    cin>>expression;

    if(isBalanced(expression)){
        cout<<"La expresion esta balanceada."<<endl;
    }
    else{
        cout<<"La expresion no esta balanceada."<<endl;
    }
    return 0;
}