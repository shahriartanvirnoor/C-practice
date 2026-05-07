#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main()
{

    struct node *head = NULL;
    struct node *st1 = (struct node*) malloc(sizeof(struct node));
    
    
    st1->data = 78;
    st1->next = NULL;
    head = st1;

    struct node *st2 = (struct node*) malloc(sizeof(struct node));
    st2->data= 34;
    st2->next=NULL;
    st1->next= st2;

    struct node *st3 = (struct node*)malloc(sizeof(struct node));
    st3->data = 59;
    st3->next = NULL;
    st2->next = st3;

    struct node *st4 = (struct node*)malloc(sizeof(struct node));
    st4->data = 45;
    st4->next = NULL;
    st3->next= st4;

    struct node *st5 = (struct node*)malloc(sizeof(struct node));
    st5->data= 58;
    st5->next= NULL;
    st4->next = st5;

    struct node *st6 = (struct node*)malloc(sizeof(struct node));
    st6->data= 74;
    st6->next= NULL;
    st5->next = st6;

    struct node *st7 = (struct node*)malloc(sizeof(struct node));
    st7->data= 64;
    st7->next= NULL;
    st6->next = st7;

    struct node *st8 = (struct node*)malloc(sizeof(struct node));
    st8->data= 98;
    st8->next= NULL;
    st7->next = st8;

    struct node *st9 = (struct node*)malloc(sizeof(struct node));
    st9->data= 33;
    st9->next= NULL;
    st8->next = st9;

    struct node *st10 = (struct node*)malloc(sizeof(struct node));
    st10->data= 95;
    st10->next= NULL;
    st9->next = st10;

    struct node *st11 = (struct node*)malloc(sizeof(struct node));
    st11->data= 87;
    st11->next= NULL;
    st10->next = st11;

    struct node *temp;
    temp = head;
    int count=0;

    while(temp!=NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
        count+=1;

    }
int no=0;
temp=head;
    while(temp!=NULL){
        no++;
        if(temp->data == 58){
            
            printf("Found at position : %d\n", no);
            break;
        }
        temp = temp->next;
    }

printf("\n");
printf("Total elements at the link list : %d \n", count);
    return 0;
}

/*temp আর head  এর জন্যও কি ডাইনামিক্যালি মেমরি প্রয়োজন?
ডাইনামিক মেমোরির কাজ কি এখানে তা ভালো করে বুঝতে হবে।
*/
/*Ans: only the nodes themselves need dynamic memory allocation*/
