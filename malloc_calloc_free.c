#include <stdio.h>
#include <stdlib.h>  // To access malloc, calloc and free.
#include <stdbool.h> // To access the bool type.


typedef struct node {
	void* data;  // void is to support any data type.
	struct node* next;
} Node;

typedef Node* Queue;

//Node* initQueue()
Queue initQueue()
{
	/* Initialize an empty queue */

	//Node* queue = (Node*)malloc(sizeof(Node));
	Queue queue = malloc(sizeof(Node));
	queue->data = NULL;
	queue->next = NULL;
	return queue;
}

//void destroyQueue(Node* queue)
void destroyQueue(Queue queue)
{
	Node* ptr = queue;
	while(ptr != NULL)
	{
		queue = ptr->next;
		free(ptr);
		ptr = queue;
	}

}

//bool insertDataToQueue(Node* queue, void* data)
bool insertDataToQueue(Queue queue, void* data)
{
	/* ^ means curr_node

	insertQueue(curr_node, 'A')
	
	BEFORE:
        Node(1) -> Node(2) -> Node(3) -> Node(4) -> NULL
                      ^

	##### PYTHON EQUIVALENT #####
	new_node = Node()
	new_node.data = curr_node.data
	new_node.next = curr_node.next

	curr_node.data = 'A'
	curr_node.next = new_node
	##### END #####
	
	AFTER:	
        Node(1) -> Node('A') -> Node(2) -> Node(3) -> Node(4) -> NULL
		       ^
	*/
	bool inserted = false;
	
	if ((queue != NULL) && (data != NULL)) {
		// If queue is empty (i.e just initialized), set the data
		// else create node at current pointer position.
		if (queue->data == NULL) { 
			queue->data = data;
			queue->next = NULL;
			inserted = true;
		} else {
			Node* newNode = malloc(sizeof(Node));
			if (newNode != NULL) {	
				newNode->data = queue->data;
				newNode->next = queue->next;

				queue->data = data;
				queue->next = newNode;
				inserted = true;
			}
		}
	}

	return inserted;
}

//void* removeNode(Node* queue);
void* removeNode(Queue queue)
{
	/* ^ means current node
	Case 1: Node(1) -> Node(2) -> Node(3) -> NULL
			     ^
	Case 2: Node(1) -> Node(2) -> NULL
	  		     ^
	Case 3: Node(NULL) -> NULL   // empty queue.
	          ^
	*/
	void* removed = NULL;
	if (queue != NULL) {
		removed = queue->data;
		if (queue->next == NULL) { // Case 2 & 3
			queue->data = NULL;
			queue->next = NULL;
		} else {  // Case 1
			Node* nextNode = queue->next;
			queue->data = nextNode->data;
			queue->next = nextNode->next;
			free(nextNode);
		}
	}

	return removed;
}


void printIntegerQueue(Queue queue)
{
	void* removedData = removeNode(queue);
	while (removedData != NULL) {
		int* pInt = (int*)removedData;
		printf("%d", *pInt);
		
		removedData = removeNode(queue);
		
		if (removedData != NULL) {
			printf(" -> ");
		}
		
	}
	printf("\n");
}


int main(void)
{
	Queue queue = initQueue();

	int one = 1;
	int two = 2;
	int three = 3;
	int four = 4;

	insertDataToQueue(queue, &one);
	insertDataToQueue(queue, &two);
	insertDataToQueue(queue, &three);
	insertDataToQueue(queue, &four);
	
	printIntegerQueue(queue);
	
	destroyQueue(queue);

	return(0);
}
