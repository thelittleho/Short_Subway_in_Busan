#include <stdio.h>

//#define vertex 44
//#define edge 39

#define vertex 3
#define edge 3

#define INFINTE_NUM 2147483647

#define V 3

int Dijkstra(int graph[V][V], int start)
{
    int distance[V]; // 최단 거리 테이블
    int visited[V];  // 노드 방문 여부 체크 배열

    // ① 출발 노드와 도착 노드 설정
    int source = start;

    // ② 최단 거리 테이블 초기화
    for (int i = 0; i < V; i++) {
        distance[i] = INFINTE_NUM; // 무한대로 초기화
        visited[i] = 0;        // 방문하지 않음
    }

    distance[source] = 0; // 시작 노드의 거리는 0

    // ⑤ ③~④ 과정을 반복
    for (int count = 0; count < V - 1; count++) {
        // ③ 현재 위치한 노드의 인접 노드 중 방문하지 않은 노드 중 가장 짧은 거리를 선택
        int minDistance = INFINTE_NUM;
        int u;

        for (int v = 0; v < V; v++) {
            if (!visited[v] && distance[v] <= minDistance) {
                minDistance = distance[v];
                u = v;
            }
        }

        visited[u] = 1; // 노드 방문 처리

        // ④ 해당 노드를 거쳐 다른 노드로 가는 거리를 계산하여 최단 거리 테이블 업데이트
        for (int v = 0; v < V; v++) {
            if (!visited[v] && graph[u][v] && distance[u] != INFINTE_NUM && distance[u] + graph[u][v] < distance[v]) {
                distance[v] = distance[u] + graph[u][v];
            }
        }
    }

    // 결과 출력
    printf("노드\t최단 거리\n");
    for (int i = 0; i < V; i++) {
        printf("%d\t%d\n", i, distance[i]);
    }
}