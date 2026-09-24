include <stdio.h>

struct node {
    int data;
    struct node *left, *right;
};

int main() {
    struct node n1, n2, n3;

    n1.data = 1;
    n2.data = 2;
    n3.data = 3;

    n1.left = &n2;
    n1.right = &n3;
    n2.left = n2.right = NULL;
    n3.left = n3.right = NULL;

    printf("Root: %d\n", n1.data);
    printf("Left Child: %d\n", n1.left->data);
    printf("Right Child: %d\n", n1.right->data);

    return 0;
}