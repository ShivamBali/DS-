#include<iostream>
using namespace std;
class stack1
{
	char a[20];
	int top;
	public:
		stack1()
		{
			top=-1;
		}
		void push(int num)
		{
			a[++top]=num;

		}
		int pop()
		{
			return a[top--];
		}

		void infix_posteval(char* );
};

void stack1::infix_posteval(char expr[20])
{
	char *d,op;
	int r,a,b,c=0;
	d=expr;
	//cout<<*d;
	while(*d!='\0')
	{
		if(isdigit(*d))
        {
            c++;
            int num=*d-'0';
            push(num);
        }
		else
		{
			a=pop();
			b=pop();
			op=*d;
			switch(op)
			{
				case '+':
					r=a+b;
					push(r);
					break;
				case '-':
					r=b-a;
					push(r);
					break;
				case '*':
					r=a*b;
					push(r);
					break;
				case '/':
					r=b/a;
					push(r);
					break;
			}
		}

		d++;
    }
    cout<<pop();

}

int main()
{
	stack1 s;
	char a[20];
	cin>>a;
	s.infix_posteval( a);
}

