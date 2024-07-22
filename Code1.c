#define MAX_HEIGHT 100000

char** sortPeople(char** names, int namesSize, int* heights, int heightsSize,
                  int* returnSize) {
    int hash[MAX_HEIGHT + 1];
    for (int i = 0; i <= MAX_HEIGHT; i++) {
        hash[i] = -1;
    }

    for (int i = 0; i < heightsSize; i++) {
        hash[heights[i]] = i;
    }

    char** result = (char**)malloc(namesSize * sizeof(char*));
    int index = 0;
    for (int i = MAX_HEIGHT; i >= 0; i--) {
        if (hash[i] != -1) {
            result[index++] = names[hash[i]];
        }
    }

    *returnSize = namesSize;
    return result;
}
