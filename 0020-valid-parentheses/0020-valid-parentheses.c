#define Empty (-1)
#define  size 1e4+1
int top;
void push( char *stack ,char c){
    top++;
    stack[top]=c;

}
void pop(){
    top--;

}
char Top(char *stack){
    char c=stack[top];
    return c;
}
bool Isempty(){
    return top==-1;
}
bool isValid(char * s){
    char *stack=(char*)malloc(size*sizeof(char));
    top=Empty;
    for(int i=0; s[i] !='\0';i++){
        if(s[i]=='('|| s[i]=='{' || s[i]=='['){
            push(stack,s[i]);
        }
        else{
            if(s[i]==')'&&  !Isempty() && Top(stack)=='('){
                pop();
            }
            else if(s[i]=='}'&&  !Isempty() && Top(stack)=='{'){
                pop();
            }
            else if(s[i]==']'&&  !Isempty() && Top(stack)=='['){
                pop();
            }
            else{
                return 0;
            }
            
            
            
         }
    }
    if(!Isempty()==0) return 1;
    else return 0;
}   
