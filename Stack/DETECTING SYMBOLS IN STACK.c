#include <stdio.h>
int main() {
    char a[100], b[100];
    scanf("%s %s", a, b);
    int f[256] = {0};
    for(int i=0; a[i]; i++) f[(unsigned char)a[i]]++;
    for(int i=0; b[i]; i++) f[(unsigned char)b[i]]--;
    for(int i=0;i<256;i++){
        if(f[i]!=0){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}
BALANCED PARANTHESES
#include<stdio.h>
#include<string.h>
int validParantheses(char s[])
{
    int count=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='(')
        {
            count++;
        }
        else if(s[i]==')')
        {
            count--;
        }
        if(count<0)
        {
            return 0;
        }
    }
    return count==0;
}
int main()
{
    char s[100];
    printf("Enter Parantheses string:");
    scanf("%s",s);
    if(validParantheses(s))
    {
        printf("Valid Parantheses");
    }
    else
    {
        printf("Invalid Parantheses");
    }
    return 0;
}

PUSH POP USING BALANCED PARANTHESES
#include<stdio.h>
#include<string.h>
#define MAX 100
char stack[MAX];
int top=-1;
void push(char c)
{
    stack[++top]=c;
}
char pop()
{
    return stack[top--];
}
int ismatching(char open,char close)
{
    if(open == '(' && close == ')')
    {
        return 1;
    }
    if(open == '{' && close == '}')
    {
        return 1;
    }
    if(open == '[' && close == ']')
    {
        return 1;
    }
    return 0;
}
int main()
{
    char expr[MAX];
    int balanced = 1;
    printf("Enter expression:");
    scanf("%s",expr);
    for(int i=0;i<strlen(expr);i++)
    {
        char ch=expr[i];
        if(ch=='(' || ch=='{' || ch=='[')
        {
            push(ch);
        }
        else if(ch==')' || ch=='}' || ch==']')
        {
            if(top==-1)
            {
                balanced=0;
                break;
            }
            char open=pop();
            if(!ismatching(open,ch))
            {
                balanced=0;
                break;
            }
        }
    }
    if(top!=-1)
       balanced=0;
    if(balanced)
       printf("parenthesis are balanced");
    else
       printf("parenthesis are not balanced");
    return 0;
}
