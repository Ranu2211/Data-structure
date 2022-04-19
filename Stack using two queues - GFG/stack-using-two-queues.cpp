// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        QueueStack *qs = new QueueStack();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            qs->push(a);
        }else if(QueryType==2){
            cout<<qs->pop()<<" ";

        }
        }
        cout<<endl;
    }
}
// } Driver Code Ends


/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

//Function to push an element into stack using two queues.
void QueueStack :: push(int x)
{
        if(q1.empty())
        q2.push(x);
        else
        q1.push(x);
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        if(q1.empty() && q2.empty()){
            return -1;
        } 
        else{
            if(q1.empty()){
                while(!q2.empty()){
                    int front = q2.front();
                    q2.pop();
                    if(q2.empty()){
                    return front;
                    break;
                    }
                    q1.push(front);
                }
            }
            if(q2.empty()){
                while(!q1.empty()){
                    int front = q1.front();
                    q1.pop();
                    if(q1.empty()){
                    return front;
                    break;
                    }
                    q2.push(front);
                }
            }
            
        }
}
