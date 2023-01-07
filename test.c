struct File {
  char* name;
  struct File* children;
  int num_children;
  int count;
};

struct File* create_file(char* name, char* parent) {
    // 为新文件分配内存
    struct File* file = malloc(sizeof(struct File));
    file->name = name;
    file->children = NULL;
    file->num_children = 0;
    file->count = 1;

    // 将文件添加到父文件的子文件列表中
    if (parent != NULL) {
        struct File* parent_file = find_file(parent);
        if (parent_file != NULL) {
            parent_file->children = realloc(parent_file->children, sizeof(struct File*) * (parent_file->num_children + 1));
            parent_file->children[parent_file->num_children] = file;
            parent_file->num_children++;
            parent_file->count++;
        }
    }

    return file;
}

struct File* find_file(char* name) {
    // 在树中搜索文件
    // 你可以使用递归遍历树来实现此函数
    ...
