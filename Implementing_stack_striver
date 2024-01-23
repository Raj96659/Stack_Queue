// Stack class.
class Stack {
    
public:
    int size;
    int *a;
    int topm;
    Stack(int capacity) {
        this->size=capacity;
        a= new int [size];
        topm=-1;
    }
    void push(int num) {
        if(!isFull()){
            topm++;
            a[topm]=num;
        }
        else return;
    }
    int pop() {
     if(!isEmpty()){
         int x=a[topm];
         topm--;
         return x;
     }   
     else return -1;
    }
    
    int top() {
       if(topm==-1)return -1;
       else return a[topm]; 
    }
    
    int isEmpty() {
       if(topm==-1)return 1;
        else return 0;
    }
    
    int isFull() {
        if(topm==size-1)return 1;
        else return 0;
    }
    
};
