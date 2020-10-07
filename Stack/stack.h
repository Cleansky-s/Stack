#define test
#ifdef test

constexpr auto MAX = 10;;
typedef struct stack {
	int data[MAX];
	int top;

}stack, * Stack;


bool initstack(stack& L);
bool push(stack& L, int i);
bool pop(stack& L, int i);

#endif // test
