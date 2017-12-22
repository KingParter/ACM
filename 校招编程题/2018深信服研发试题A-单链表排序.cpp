/*************************************************
2018深信服研发试题A - 单链表排序
将链表升序排序

提交结果：AC
**************************************************/
#include <stdio.h>
#include <malloc.h>

struct node {
    int val;
    struct node *next;
};

static void list_sort(struct node *head);

struct node *list_create(int arr[], int size)
{
    struct node *head = NULL;
    int i;
    for (i = size - 1; i >= 0; --i) {
        struct node *p = (struct node *)malloc(sizeof(struct node));

        p->val = arr[i];
        p->next = head;
        head = p;
    }
    return head;
}
static void list_print(struct node *head)
{
    for (; head; head = head->next) {
        printf("%d", head->val);
        if (head->next)
            printf(" ");
    }
    printf("\n");
}
static void list_free(struct node *head)
{
    struct node *next;
    while (head) {
        next = head->next;
        free(head);
        head = next;
    }
}
static int input(int **arr, int *size)
{
    int i;
    int ret;

    ret = fscanf(stdin, "%d\n", size);
    if (ret != 1)
        return -1;
    *arr = (int *)malloc(sizeof(int) * (*size));
    for (i = 0; i < *size; ++i) {
        fscanf(stdin, "%d ", &(*arr)[i]);
    }
    return 0;
}

int main(int argc, char *argv[])
{
    struct node *head;
    int *arr = NULL;
    int size = 0;

    if (input(&arr, &size) < 0) {
        fprintf(stderr, "input error\n");
        return 0;
    }
    head = list_create(arr, size);
    list_sort(head);
    list_print(head);
    list_free(head);
    free(arr);
    return 0;
}

static void list_sort(struct node *head)
{
    //TODO:
    if (head)
    {
        struct node *tmp1 = head;
        while (tmp1)
        {
            struct node *tmp2 = tmp1->next;
            while(tmp2)
            {
                if (tmp2->val < tmp1->val)
                {
                    int tmp = tmp1->val;
                    tmp1->val = tmp2->val;
                    tmp2->val = tmp;
                }
                tmp2 = tmp2->next;
            }
            tmp1 = tmp1->next;
        }
    }
}