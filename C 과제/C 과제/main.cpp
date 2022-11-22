//C 과제(김연주)

//220605_새
//#include<stdio.h>
//
//int main()
//{
//	int n;			//총 몇마리
//	int bird = 0;	//날아간 새
//	int sec = 0;
//
//	printf("Input : ");
//	scanf_s("%d", &n);
//	while (1)
//	{
//		bird++;
//		if (n == 0)
//		{
//			break;
//		}
//		if (n < bird)
//		{
//			bird = 1;
//		}
//		n = n - bird;
//		sec++;
//	}
//	printf("%d", sec);
//
//	return 0;
//}

//220605_가장많이쓰인알파벳
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char str[1000001];
//    int alpha[26];
//
//    scanf("%s", str);
//    int len = strlen(str);
//
//    for (int i = 0; i < len; i++) {
//        if (str[i] - 'A' > 25)
//            str[i] = str[i] - 32;
//        alpha[str[i] - 'A']++;
//    }
//
//    int max = 0, ans = 0;
//    for (int i = 0; i < 26; i++) {
//        if (max < alpha[i]) {
//            max = alpha[i];
//            ans = i;
//        }
//        else if (max == alpha[i]) ans = -1;
//    }
//
//    if (ans == -1) printf("?");
//    else printf("%c", ans + 65);
//
//    return 0;
//}

//220607_찍기문제
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int max(int x, int y) {
//	return x > y ? x : y;
//}
//int main(void) {
//	int j, N, k = 0, y = 0, h = 0;
//	char K[6] = "ABCBC";
//	char Y[4] = "CAB";
//	char H[4] = "CBA";
//	char arr[100];
//	scanf("%d", &N);
//	scanf("%s", arr);
//	for (int i = 0; i < N; i++) {
//		if (arr[i] == K[i % 5]) k++;
//		if (arr[i] == Y[i % 3]) y++;
//		if (arr[i] == H[i % 3]) h++;
//	}
//	printf("%d\n", max(k, max(y, h)));
//	if ((k >= y) && (k >= h)) printf("K\n");
//	if ((y >= k) && (y >= h)) printf("Y\n");
//	if ((h >= k) && (h >= y)) printf("H\n");
//
//	return 0;
//}
 
//220608_안나온숫자(30개 중에 2개)
//#include<stdio.h>
//
//int main()
//{
//	int arr[30];
//	int i;
//	int num = 0;
//
//	for (i = 1; i <= 30; ++i)
//	{
//		arr[i] = i;
//	}
//
//	for (i = 1; i <= 28; ++i)
//	{
//		scanf_s("%d", &num);
//		if (num == arr[i])
//		{
//			arr[i] = 0;
//		}
//	}
//
//	for (i = 1; i <= 30; ++i)
//	{
//		if (arr[i] == i)
//		{
//			printf("%d", i);
//		}
//	}
//}

//220613_방문문제
//#include <stdio.h>
//
//int main()
//{
//    int door[10000] = { 0, };
//    int r, n, count = 0;
//    scanf_s("%d %d", &r, &n);
//
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= r; j++)
//        {
//            if (j % i == 0)
//            {
//                if (door[j] == 0)
//                {
//                    door[j] = 1;
//                }
//                else
//                {
//                    door[j] = 0;
//                }
//            }
//        }
//    }
//
//    for (int i = 1; i <= r; i++)
//    {
//        if (door[i] == 1)
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//}

//220613_ati수
//#include <stdio.h>
//
//int num(int n) {
//    if (n < 10)
//        return n;
//    int temp = n;
//    int result = 1;
//    while (temp > 0) {
//        result *= (temp % 10);
//        temp /= 10;
//    }
//    return num(result);
//}
//
//int main()
//{
//    int N, count = 0;
//
//    scanf_s("%d", &N);
//
//    for (int i = 1; i <= N; i++) {
//        if (num(i) == 6) {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//}

//220613_우상향수
//#include <stdio.h>
//int up(int n) {
//    int current;
//    while (n > 0) {
//        int prev = n % 10;
//        n /= 10;
//        current = n % 10;
//        if (prev <= current)
//            return 0;
//    }
//    return 1;
//}
//
//int main() {
//    int N, count = 0;
//    printf("N 입력: ");
//    scanf_s("%d", &N);
//    for (int i = 1; i <= N; i++) {
//        if (up(i)) {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//}

//220613_시그마(21억)
//#include <stdio.h>
//#include <limits.h>
//int main()
//{
//    long long a;
//    long long b;
//
//    scanf_s("%lld %lld", &a, &b);
//
//    if (a <= b)
//    {
//        printf("%lld", (a + b) * (b - a + 1) / 2);
//    }
//    else
//    {
//        printf("%lld", (a + b) * (a - b + 1) / 2);
//    }
//}

//220616_계산기
//#include <stdio.h>
//void Menu()
//{
//    puts("1. + ");
//    puts("2. - ");
//    puts("3. * ");
//    puts("4. / ");
//}
//double Sum(double a, double b)
//{
//    double result = a + b;
//
//    printf("%f + %f = %f\n", a, b, result);
//    return result;
//}
//double Sub(double a, double b)
//{
//    double result = a - b;
//
//    printf("%f - %f = %f\n", a, b, result);
//    return result;
//}
//double Mul(double a, double b)
//{
//    double result = a * b;
//
//    printf("%f * %f = %f\n", a, b, result);
//    return result;
//}
//double Div(double a, double b)
//{
//    double result = a / b;
//
//    printf("%f / %f = %f\n", a, b, result);
//    return result;
//}
//
//int main()
//{
//    int a, b, result;
//    char cal;
//    int select;
//
//    printf("첫번째 숫자 입력 : ");
//    scanf_s("%d", &a);
//    while (1)
//    {
//        Menu();
//        printf("연산을 선택하세요 : ");
//        scanf_s(" %c", &cal);
//
//        printf("두번째 숫자 입력 : ");
//        scanf_s("%d", &b);
//
//        switch (cal)
//        {
//        case '+':
//            a = Sum(a, b);
//            break;
//        case '-':
//            a = Sub(a, b);
//            break;
//        case '*':
//            a = Mul(a, b);
//            break;
//        case '/':
//            a = Div(a, b);
//            break;
//        case 0:
//            break;
//        defalut:
//            printf("잘못된 계산식입니다.");
//        }
//        printf("초기화 : 1, 프로그램 종료 : 0, 계속 계산하기 : 그 외 숫자\n");
//        scanf_s("%d", &select);
//        if (select == 1)
//        {
//            printf("첫번째 숫자 입력 : ");
//            scanf_s("%d", &a);
//        }
//        else if (select == 0)
//        {
//            break;
//        }
//    }
//    return 0;
//}

//220617_이중연결리스트(교수님과제)
//#include<stdio.h>
//#include<stdlib.h>
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//};
//
//struct List
//{
//	Node* head;
//	Node* tail;
//};
//Node* AllocNode(int data)
//{
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->prev = n->next = NULL;
//	n->data = data;
//
//	return n;
//}
//void InitList(List* plt)
//{
//	plt->head = AllocNode(0);
//	plt->tail = AllocNode(0);
//	plt->head->next = plt->tail;
//	plt->tail->prev = plt->head;
//}
//void UninitList(List* plt)
//{
//	for (Node* p = plt->head; p; )		//p가 널이될때까지
//	{
//		Node* pn = p->next;
//		free(p);
//		p = pn;
//	}
//}
//void AddNextList(List* plt, int data)
//{
//	Node* t = plt->tail;
//	Node* pt = plt->tail->prev;
//	Node* n = AllocNode(data);
//
//	pt->next = n;
//	n->prev = pt;
//	n->next = t;
//	t->prev = n;
//}
//void PrintNextList(List* plt)
//{
//	for (Node* p = plt->head->next; p != plt->tail; p = p->next)
//		printf("%d ", p->data);
//	printf("\n");
//
//}
//int main()
//{
//	List lt;
//	InitList(&lt);
//
//
//	AddNextList(&lt, 10);
//	AddNextList(&lt, 20);
//	AddNextList(&lt, 30);
//
//	PrintNextList(&lt);
//
//	UninitList(&lt);
//}

//220620_괄호검사
//#include <stdio.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct stack {
//    char data;
//    struct stack* link;
//}stack;
//
//stack* top;
//stack* create_node() {
//    stack* p;
//
//    p = (stack*)calloc(1, sizeof(stack));
//
//    return p;
//}
//void push(char data) {
//    stack* q;
//    q = create_node();
//    q->data = data;
//
//    q->link = top->link;
//    top->link = q;
//
//}
//void print_stack() {
//
//    stack* q;
//
//    q = top;
//
//    while (q->link != NULL) {
//        q = q->link;
//
//        printf("%c ", q->data);
//    }
//}
//char pop() {
//    stack* q;
//    char res;
//
//    if (top->link == NULL) return 'x';
//
//    q = top->link;
//    res = q->data;
//    top->link = q->link;
//    free(q);
//    return res;
//}
//
//int is_empty() {
//
//    return  top->link == NULL;
//}
//
//void main() {
//    char phrase[30];
//    int i, len;
//    top = create_node();
//    char temp;
//
//    printf("식 입력: ");
//    gets_s(phrase);
//    printf("입력한 식: %s\n", phrase);
//    len = strlen(phrase);
//
//    for (i = 0; i < len; i++) {
//
//        if (phrase[i] == '(') {
//            push('(');
//        }
//
//        else if (phrase[i] == ')') {
//            temp = pop();
//            if (temp == '(') printf("ok\n");
//
//            else if (temp == 'x')   printf("open fail\n");
//        }
//    }
//    if (is_empty() != 1) printf("close fail\n");
//}

//220620_생년월일

