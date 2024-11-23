#include <stdio.h>
#include <unistd.h>

int main() {
    uid_t uid = getuid();
    gid_t gid = getgid();

    printf("UID real: %d\n", uid);
    printf("GID real: %d\n", gid);

    return 0;
}
