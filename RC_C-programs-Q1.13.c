//13. Convert bytes into KB, MB, GB.
#include <stdio.h>
int main()
{
    float bytes, KB, MB, GB;
    printf("Enter number of bytes:");
    scanf("%f",&bytes);
    KB=bytes/1024;
    MB=KB/1024;
    GB=MB/1024;
    printf("%f bytes=%f KB\n",bytes,KB);
    printf("%f KB=%f MB\n",KB,MB);
    printf("%f MB=%f GB\n",MB,GB);
    return 0;
}
