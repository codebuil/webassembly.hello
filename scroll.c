const char *hhhhh="";
int iii=1;
char *mems="";
const char *hello=".this is a scroll message..\0\0\0\0\0\0";
const char* hello_world() {
    if(mems[0]==0)iii=0;
    mems=hello+iii;
    iii++;
    return mems;
}