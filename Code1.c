void dfs(struct TreeNode* node, int dis, int* num, int** distances, int* size) {
    if (node == NULL)
        return;
    if (node->left == NULL && node->right == NULL) {
        distances[*size] = (int*)malloc(sizeof(int));
        distances[*size][0] = 1;
        (*size)++;
        return;
    }

    int leftSize = 0, rightSize = 0;
    int* leftDistances[1000], *rightDistances[1000];

    dfs(node->left, dis, num, leftDistances, &leftSize);
    dfs(node->right, dis, num, rightDistances, &rightSize);

    for (int i = 0; i < leftSize; i++) {
        for (int j = 0; j < rightSize; j++) {
            if (leftDistances[i][0] + rightDistances[j][0] <= dis)
                (*num)++;
        }
    }

    for (int i = 0; i < leftSize; i++) {
        if (leftDistances[i][0] + 1 <= dis) {
            distances[*size] = (int*)malloc(sizeof(int));
            distances[*size][0] = leftDistances[i][0] + 1;
            (*size)++;
        }
        free(leftDistances[i]);
    }

    for (int i = 0; i < rightSize; i++) {
        if (rightDistances[i][0] + 1 <= dis) {
            distances[*size] = (int*)malloc(sizeof(int));
            distances[*size][0] = rightDistances[i][0] + 1;
            (*size)++;
        }
        free(rightDistances[i]);
    }
}

int countPairs(struct TreeNode* root, int dis) {
    int num = 0;
    int* distances[1000];
    int size = 0;
    dfs(root, dis, &num, distances, &size);

    for (int i = 0; i < size; i++)
        free(distances[i]);

    return num;
}
