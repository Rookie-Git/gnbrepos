#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("before popen\n");
    FILE* fp = popen("./L2L3.sh", "r");
    printf("after popen\n");
    if(!fp) {
        printf("File opening failed");
        return -1;
    }

    int c, ret; // 注意：int，非char，要求处理EOF
    while ((c = fgetc(fp)) != EOF) { // 标准C I/O读取文件循环
       putchar(c);
    }
    
    if (ferror(fp))
        puts("I/O error when reading");
    else if (feof(fp))
        puts("End of file reached successfully");
    
    printf("before pclose\n");
    ret = pclose(fp);
    if (ret == -1)
	    printf("pclose return failed\n");
}
