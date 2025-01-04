/*
 * @Author: liangzhidanta_wsh 1652168492@qq.com
 * @Date: 2024-12-26 14:53:26
 * @LastEditors: liangzhidanta_wsh 1652168492@qq.com
 * @LastEditTime: 2024-12-28 18:17:14
 * @FilePath: \test\test.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define V 10  // 假设有10个节点

// 队列的实现
typedef struct Queue {
    int front, rear, size;
    unsigned capacity;
    int* array;
} Queue;

Queue* createQueue(unsigned capacity) {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->capacity = capacity;
    queue->front = queue->size = 0;
    queue->rear = capacity - 1;
    queue->array = (int*)malloc(queue->capacity * sizeof(int));
    return queue;
}

bool isFull(Queue* queue) {
    return (queue->size == queue->capacity);
}

bool isEmpty(Queue* queue) {
    return (queue->size == 0);
}

void enqueue(Queue* queue, int item) {
    if (isFull(queue))
        return;
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
}

int dequeue(Queue* queue) {
    if (isEmpty(queue))
        return -1;
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size = queue->size - 1;
    return item;
}

void BFS(int graph[V][V], int start) {
    system("pause");
    bool visited[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    Queue* queue = createQueue(V);

    visited[start] = true;
    enqueue(queue, start);

    while (!isEmpty(queue)) {
        int s = dequeue(queue);
        printf("%d ", s);

        for (int i = 0; i < V; i++) {
            if (graph[s][i] && !visited[i]) {
                visited[i] = true;
                enqueue(queue, i);
            }
        }
    }
}

// 生成一个随机的有向无环图（DAG）
void generateRandomDAG(int graph[V][V]) {
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            graph[i][j] = 0;
        }
    }

    // 生成随机边，确保没有环
    for (int i = 0; i < V; i++) {
        for (int j = i + 1; j < V; j++) {
            if (rand() % 2) {  // 50%的概率生成边
                graph[i][j] = 1;
            }
        }
    }
}

int main() {
    int graph[V][V];

    srand(time(NULL));  // 初始化随机数生成器
    generateRandomDAG(graph);

    printf("Generated Directed Acyclic Graph (DAG):\n");
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }

    printf("\nBreadth First Traversal starting from vertex 0:\n");
    BFS(graph, 0);

    return 0;
}
