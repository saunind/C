#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct
{
    unsigned char key;
    char fname[16];
    char lname[16];
    unsigned char age;
}
person_rec;

int open_record(char *filename)
{
    int fd;
    
    fd = open(filename, O_CREAT, | O_RDWR, | O_APPEND, 0644);
        if(fd == -1)
            perror("open_record");
    return fd;
}

void close_record(int fd)
{
    close(fd);
}

int insert_record(int fd, person_rec *rec)
{
    int ret;

    ret = write(fd, rec, sizeof(person_rec));
    return ret;
}

int get_record(int fd, person_rec *rec, int key)
{
    int ret;
    while((ret = read(fd, rec, sizeof(person_rec))) != -1
    {
        if(ret == 0)
        {
            memset(rec, 0, sizeof(person_rec));
            break;
            return ret;
        }
        else if(key == rec->key)
            return ret;
    memset(rec, 0, sizeof(person_rec));
    return ret;
    }
}

int delete_record(fd, int key)
{
    int ret;
    person_rec rec;

    off_t pos;

    pos = lseek(fd, 0, SEEK_SET);
    while((ret = read(fd, rec, sizeof(person_rec))) != -1
    {
        if(ret == 0)
        {
            memset(rec, 0, sizeof(person_rec));
            return ret;
        }
        else if(key == rec->key)
        {
            lseek(fd, pos, SEEK_SET);
            rec.key = 0;
            ret = write(fd, &rec, sizeof(person_rec));            
            return ret;
        }
        pos = lseek(fd, 0, SEEK_CUR);
    }
    memset(rec, 0, sizeof(person_rec));
    return ret;
}


    
int main(int argc, char *argv[])
{
    int fd;
    person_rec rec;
     
    fd = open_record("data1");
    
    if(argv > 1)
    {
        if(
    

    }
    

return 0;
}














