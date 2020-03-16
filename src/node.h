#ifndef NODE_H
#define NODE_H

/*
 * What's a node?
 * Node is an group graph that u can manipulate groups
 * here I'm using node 'cause I need to store variable name value etc..
 */

typedef struct int_node {
    char *name;
    int pointer;
    int value;
} int_node;

typedef struct str_node {
    char *name;
    int pointer;
    char *value;
} str_node;

#endif // NODE_H
