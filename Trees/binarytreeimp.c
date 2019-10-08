#include  <stdio.h>
#include  <stdlib.h>
#include  <conio.h>

struct  node
{
    int  data ;
    struct  node  *left, *right ;
} ;

int  ncount, lcount ;


struct node * create()
{
    int  x ;
    struct  node  *pnode ;
    printf("Enter the data value of node(Enter -1 for no data or NULL.)\n") ;
    scanf("%d",&x) ;
    if(x==-1)
        return NULL;
    pnode=(struct node*)malloc(sizeof(struct node)) ;
    pnode->data=x ;
    printf("Enter the left child of %d.\n",x) ;
    pnode->left=create() ;
    printf("Enter the right child of %d.\n",x) ;
    pnode->right=create() ;
    return pnode ;
}



void  preorder(struct  node  *root)
{
    if(root!=NULL)
        {
            printf("%d ", root->data) ;
            preorder(root->left) ;
            preorder(root->right) ;
        }
}

void  inorder(struct  node  *root)
{
    if(root!=NULL)
        {
            inorder(root->left) ;
            printf("%d ",root->data) ;
            inorder(root->right) ;
        }
}

void  postorder(struct  node  *root)
{
    if(root!=NULL)
        {
            postorder(root->left) ;
            postorder(root->right) ;
            printf("%d ",root->data) ;
        }
}


void deleteTree(struct node* root) 
{
    if (root == NULL) 
	return;
 
    deleteTree(root->left);
    deleteTree(root->right);
   
    printf("\n Deleting node: %d", root->data);
    free(root);
} 


void main()
{
    struct node *root = NULL ;
    struct node *root1 = NULL ;
    struct node *root2 = NULL ;
    int  ch ;
    do
        {
            printf("1.Create. \n") ;
            printf("2.Preorder. \n") ;
            printf("3.Inorder. \n") ;
            printf("4.Postorder. \n") ;
            printf("5.Delete\n") ;
            printf("Enter your choice: ") ;
            scanf("%d",&ch) ;
            switch(ch)
                {
                case 1:
                    root=create() ;
                    break ;
                case 2:
                    preorder(root) ;
                    printf("\n") ;
                    break ;
                case 3:
                    inorder(root) ;
                    printf("\n") ;
                    break ;
                case 4:
                    postorder(root) ;
                    printf("\n") ;
                    break ;
                case 5:
                    deleteTree(root);
                    break;
                case 6:
                    break;
                }
        }
    while(ch!=6) ;
    getch() ;
}











