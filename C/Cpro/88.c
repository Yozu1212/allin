#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#define N 10

int graph[N][N] = {
    {0, 5, 8, 6, 7, 8, 1, 6, 4, 10},
    {5, 0, 7, 6, 6, 7, 4, 8, 11, 5},
    {8, 7, 0, 10, 7, 8, 5, 1, 7, 2},
    {6, 6, 10, 0, 4, 5, 1, 6, 10, 7},
    {7, 6, 7, 4, 0, 6, 2, 11, 6, 5},
    {8, 7, 8, 5, 6, 0, 5, 2, 10, 5},
    {1, 4, 5, 1, 2, 5, 0, 5, 1, 7},
    {6, 8, 1, 6, 11, 2, 5, 0, 10, 6},
    {4, 11, 7, 10, 6, 10, 1, 10, 0, 1},
    {10, 5, 2, 7, 5, 5, 7, 6, 1, 0}
};

int best_dist = INT_MAX;
int best_path[N];

void tsp(int current, int dist, int count, int visited_count, int *current_path, int *visited) {
    if (visited_count == N && current == 0) {
        if (dist < best_dist) {
            best_dist = dist;
            for (int i = 0; i < N; i++) {
                best_path[i] = current_path[i];
            }
        }
        return;
    }

    if (count == 1) {
        visited_count = 0;
        current_path[0] = 0;
    }

    for (int i = 0; i < N; i++) {
        if (!visited[i]) {
            visited[i] = 1;
            current_path[count] = i;

            tsp(i, dist + graph[current][i], count + 1, visited_count + 1, current_path, visited);

            visited[i] = 0;
        }
    }
}

int main() {
    int current_path[N];
    int visited[N];
    memset(visited, 0, sizeof(visited));

    tsp(0, 0, 1, 1, current_path, visited);

    printf("經過的城市：\t");
    for (int i = 0; i < N; i++) {
        printf("%d\t", best_path[i]+1);
    }
    printf("1\t\n");

    printf("每次增加的距離：\t");
    for (int i = 0; i < N - 1; i++) {
        int city1 = best_path[i];
        int city2 = best_path[i + 1];
        printf("%d\t", graph[city1][city2]);
    }
    printf("%d\n", graph[best_path[N - 1]][0]);

    printf("最短路徑長度：%d\t\n", best_dist);

    return 0;
}

